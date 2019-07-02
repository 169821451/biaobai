#ifndef QEVENT_H
#define QEVENT_H

#include <QMainWindow>
#include <QEnterEvent>

class QEvent
{
public:
    QEvent();
signals:
    QPoint QEnterEvent::pos(QPoint *Mpos);

public slots:

};

#endif // QEVENT_H
