#ifndef MOUSEEVENT_H
#define MOUSEEVENT_H

#include <QWidget>
#include <QEnterEvent>
#include "mainwindow.h"
#include <QPushButton>

class mouseEvent : public QPushButton
{
    Q_OBJECT
public:
   // explicit mouseEvent(QWidget *parent = nullptr);

    mouseEvent();

    void enterEvent(QEvent *);



signals:

public slots:
};

#endif // MOUSEEVENT_H
