#ifndef LEFTBTN_H
#define LEFTBTN_H

#include <QWidget>
#include <QPushButton>

class leftBtn : public QWidget
{
    Q_OBJECT
public:
    explicit leftBtn(QWidget *parent = nullptr);

signals:
    void leftBtn(QWidget *parent);
public slots:

};

#endif // LEFTBTN_H
