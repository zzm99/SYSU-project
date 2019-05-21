#include "zhuye.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include<QSplashScreen>
#include <QElapsedTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setWindowIcon(QIcon("xiaohui.ico"));

    QPixmap pixmap(":///image/xiaohui.png");
    QSplashScreen splash(pixmap);
    splash.show();
    int delayTime = 2;
    QElapsedTimer timer;
    timer.start();
    while(timer.elapsed() < (delayTime * 1000))
    {
        a.processEvents();
    }
    splash.close();

    //添加数据库驱动
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    //设置数据库名称
    db.setDatabaseName("./SYSU.db");

    if(db.open())
    {
        //qDebug()<<"open success";
    }
    else
    {
        //qDebug()<<"open failed";
        return false;
    }

    zhuye w;
    w.setStyleSheet("QMainWindow{background-image: url(:/jpg/image/beijing1.jpg)}");
    w.show();

    return a.exec();
}
