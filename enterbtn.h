#ifndef ENTERBTN_H
#define ENTERBTN_H

#include <QWidget>

class enterBtn : public QWidget
{
    Q_OBJECT
public:
    explicit enterBtn(QWidget *parent = nullptr);

signals:
    void mousePressEvent(QMouseEvent *event);

public slots:

};

#endif // ENTERBTN_H
