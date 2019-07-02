#include "mouseevent.h"

mouseEvent::mouseEvent()
{
    this->setFixedSize(80,50);
}


void mouseEvent::enterEvent(QEvent *)
{
    int wide = rand()%750;
    int high = rand()%520;
    this->move(wide,high);
}
