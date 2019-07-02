#ifndef MOUSEMOVEEVENT_H
#define MOUSEMOVEEVENT_H

#include <QWidget>
#include "mainwindow.h"
#include <QMouseEvent>

class MouseMoveEvent
{
public:
    MouseMoveEvent();
signals:

public slots:
    void MainWindow::mouseMoveEvent(QMouseEvent *p);
};

#endif // MOUSEMOVEEVENT_H
