#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMouseEvent>
#include <QCloseEvent>
#include <QWidget>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
protected:

    void closeEvent(QCloseEvent *event);

public:
    int count;

signals:

public slots:

};

#endif // MAINWINDOW_H
