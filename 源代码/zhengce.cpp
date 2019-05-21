#include "zhengce.h"
#include "ui_zhengce.h"
#include <QDesktopServices>
#include<QUrl>

zhengce::zhengce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zhengce)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

zhengce::~zhengce()
{
    delete ui;
}

void zhengce::on_LinkButton_news_zhuye_2_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://admission.sysu.edu.cn/zs01/zs01b/index.htm")));
}
