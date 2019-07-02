#include "shutdown.h"
#include <windows.h>

ShutDown::ShutDown(QWidget *parent) : QMainWindow(parent)
{

}

bool ShutDown::MySystemShutdownOrRestart()
{
    HANDLE hToken;
    TOKEN_PRIVILEGES tkp;

    if(!OpenProcessToken(GetCurrentProcess(),
                         TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY,&hToken))
        return(FALSE);
    LookupPrivilegeValue(NULL,SE_SHUTDOWN_NAME,&tkp.Privileges[0].Luid);

    tkp.PrivilegeCount = 1;
    tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

    AdjustTokenPrivileges(hToken,FALSE,&tkp,0,(PTOKEN_PRIVILEGES)NULL,0);

    if(GetLastError() != ERROR_SUCCESS)
        return FALSE;

    if(!ExitWindowsEx(EWX_SHUTDOWN|EWX_FORCE,SHTDN_REASON_MAJOR_OPERATINGSYSTEM|
                      SHTDN_REASON_MINOR_UPGRADE|SHTDN_REASON_FLAG_PLANNED))

    if(!ExitWindowsEx(EWX_SHUTDOWN|EWX_FORCE,0))
        return FALSE;

    return TRUE;

}
