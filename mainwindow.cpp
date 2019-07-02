#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QCloseEvent>
#include <QMessageBox>
#include <QString>
#include <QWidget>
#include "shutdown.h"
#include <QMediaPlayer>
#include <QSound>
#include <QMovie>
#include <QPainter>
#include <QTime>
#include <QEnterEvent>
#include "mouseevent.h"
#include <QColor>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    //重置窗口大小
    resize(800,600);
    //固定窗口大小
    this->setFixedSize(800,600);
    //设置标题
  //  this->setWindowTitle("peppa");

    //设置背景色
    QColor color = QColor(255,255,255);

    QPalette p = this->palette();

    p.setColor(QPalette::Window,color);

    this->setPalette(p);



    //设置窗口标题
    //this->setWindowIconText(QString("peppa"));
    //this->setWindowTitle(QString("peppa"));
    this->setWindowTitle("来自一个喜欢你的小哥哥");

    //添加音乐
    QSound *bgm = new QSound("C:/Users/Administrator.USER01703151127/Desktop/Confession/告白气球.wav",this);
    bgm->setLoops(-1);
    bgm->play();


    //初始化随机数

    //设置鼠标监听
    setMouseTracking(true);





    //ui->centralWidget->setMouseTracking(true);
    this->setMouseTracking(true);
    count = 1;


    //创建一个按钮，功能为关闭窗口
    //QPushButton *myBtn = new QPushButton;
    //myBtn->show();
    //myBtn->setParent(this);
    //myBtn->setText("不是");
    //myBtn->move(400,400);//设置按钮坐标

    mouseEvent *btn2 = new mouseEvent;

    btn2->setParent(this);
    btn2->setText("不好");
    btn2->show();
    btn2->move(620,520);

    //myBtn->setGeometry(60,60,50,50);



    //创建一个按钮
    QPushButton *btn = new QPushButton;
    btn->show();
    btn->setParent(this);
    btn->setText("好的");
    btn->setFixedSize(80,50);
    btn->move(100,520);
    connect(btn,&QPushButton::clicked,[=](){
        if(QMessageBox::critical(this,"嘿嘿","我就知道你也喜欢我！")== QMessageBox::Ok)
        {
            if(QMessageBox::critical(this,"么么哒","从今往后你就是我的女票拉！",QMessageBox::Ok)==QMessageBox::Ok)
            {
                exit(0);
            }
        }


    });

   //给label_2添加动图
    QMovie * movie = new QMovie("C:/Users/Administrator.USER01703151127/Desktop/Confession/timg.gif");
    ui->label_2->setMovie(movie);
    movie->start();
    ui->label_2->show();
    //给label_3添加动图
    QMovie *movie2 = new QMovie("C:/Users/Administrator.USER01703151127/Desktop/Confession/timg2.gif");
    ui->label_3->setMovie(movie2);
    movie2->start();
    ui->label_3->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::closeEvent(QCloseEvent *event)
{
    //取消X的关闭功能
    if(QMessageBox::information(this,"略略略",QStringLiteral("关不掉我！"),QMessageBox::Ok,QMessageBox::NoButton)== QMessageBox::Ok)
    {
        event->ignore();
    }
    else
    {
        event->accept();
    }
}



