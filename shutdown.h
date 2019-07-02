#ifndef SHUTDOWN_H
#define SHUTDOWN_H

#include <QMainWindow>

class ShutDown : public QMainWindow
{
    Q_OBJECT
public:
    explicit ShutDown(QWidget *parent = nullptr);

    ShutDown *Msd;

    bool MySystemShutdownOrRestart();

signals:

public slots:
};

#endif // SHUTDOWN_H
