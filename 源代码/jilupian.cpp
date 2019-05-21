#include "jilupian.h"
#include "ui_jilupian.h"
#include <QDesktopServices>
#include<QUrl>
jilupian::jilupian(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jilupian)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

jilupian::~jilupian()
{
    delete ui;
}

void jilupian::on_pushButton_8_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.bilibili.com/video/av1706567/")));
}

void jilupian::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.bilibili.com/video/av26185779/?p=1")));

}
void jilupian::on_pushButton_9_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.bilibili.com/video/av26185779/?p=2")));

}

void jilupian::on_pushButton_7_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("https://www.bilibili.com/video/av26185779/?p=3")));

}

void jilupian::on_LinkButton_news_zhuye_2_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://admission.sysu.edu.cn/zs02/index.htm")));

}
