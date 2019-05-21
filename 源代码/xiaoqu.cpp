#include "xiaoqu.h"
#include "ui_xiaoqu.h"
#include<QSqlQueryModel>
#include<QString>
#include<QSettings>
#include<QProcess>
#include<QMutex>
#include<QWaitCondition>
#include <QDesktopServices>
#include<QUrl>

xiaoqu::xiaoqu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xiaoqu)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

xiaoqu::~xiaoqu()
{
    delete ui;
}

void xiaoqu::on_backb_2_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://www.sysu.edu.cn/2012/cn/zdgk/zdgk02/index.htm")));
}

void xiaoqu::on_pushButton_2_clicked()
{
    QString a = ui->comboBox->currentText();
    if(a == "东校区")
        QDesktopServices::openUrl(QUrl(QLatin1String("https://map.baidu.com/poi/%E4%B8%AD%E5%B1%B1%E5%A4%A7%E5%AD%A6(%E4%B8%9C%E6%A0%A1%E5%8C%BA)/@12623562.2816,2623881.87,17z?uid=af1ae56beee7d8114307c19e&primaryUid=17826078714836811775&ugc_type=3&ugc_ver=1&device_ratio=2&compat=1&querytype=detailConInfo&da_src=shareurl")));
    else if(a == "南校区")
        QDesktopServices::openUrl(QUrl(QLatin1String("https://map.baidu.com/search/%E4%B8%AD%E5%B1%B1%E5%A4%A7%E5%AD%A6(%E5%8D%97%E6%A0%A1%E5%8C%BA)/@12612315.94455,2627623.10445,16z?querytype=s&da_src=shareurl&wd=%E4%B8%AD%E5%B1%B1%E5%A4%A7%E5%AD%A6(%E5%8D%97%E6%A0%A1%E5%8C%BA)&c=257&src=0&pn=0&sug=0&l=16&b=(12609243.94455,2626115.10445;12615387.94455,2629131.10445)&from=webmap&biz_forward=%7B%22scaler%22:2,%22styles%22:%22pl%22%7D&device_ratio=2")));
    else if(a == "北校区")
        QDesktopServices::openUrl(QUrl(QLatin1String("https://map.baidu.com/search/%E4%B8%AD%E5%B1%B1%E5%A4%A7%E5%AD%A6(%E5%8C%97%E6%A0%A1%E5%8C%BA)/@12612076.726750001,2631355.865985,18z?querytype=s&da_src=shareurl&wd=%E4%B8%AD%E5%B1%B1%E5%A4%A7%E5%AD%A6(%E5%8C%97%E6%A0%A1%E5%8C%BA)&c=257&src=0&pn=0&sug=0&l=17&b=(12622026.2816,2623127.87;12625098.2816,2624635.87)&from=webmap&biz_forward=%7B%22scaler%22:2,%22styles%22:%22pl%22%7D&device_ratio=2")));
    else if(a == "深圳校区")
        QDesktopServices::openUrl(QUrl(QLatin1String("https://map.baidu.com/search/%E4%B8%AD%E5%B1%B1%E5%A4%A7%E5%AD%A6(%E6%B7%B1%E5%9C%B3%E6%A0%A1%E5%8C%BA)/@12684235.91,2576153.7800000003,12z?querytype=s&da_src=shareurl&wd=%E4%B8%AD%E5%B1%B1%E5%A4%A7%E5%AD%A6(%E6%B7%B1%E5%9C%B3%E6%A0%A1%E5%8C%BA)&c=257&src=0&pn=0&sug=0&l=17&b=(12622026.2816,2623127.87;12625098.2816,2624635.87)&from=webmap&biz_forward=%7B%22scaler%22:2,%22styles%22:%22pl%22%7D&device_ratio=2")));
    else
        QDesktopServices::openUrl(QUrl(QLatin1String("https://map.baidu.com/search/%E4%B8%AD%E5%B1%B1%E5%A4%A7%E5%AD%A6(%E7%8F%A0%E6%B5%B7%E6%A0%A1%E5%8C%BA)/@12643750.9527,2537915.93046,16z?querytype=s&da_src=shareurl&wd=%E4%B8%AD%E5%B1%B1%E5%A4%A7%E5%AD%A6(%E7%8F%A0%E6%B5%B7%E6%A0%A1%E5%8C%BA)&c=257&src=0&pn=0&sug=0&l=17&b=(12622026.2816,2623127.87;12625098.2816,2624635.87)&from=webmap&biz_forward=%7B%22scaler%22:2,%22styles%22:%22pl%22%7D&device_ratio=2")));

}

void xiaoqu::on_pushButton_3_clicked()
{
    QString a = ui->comboBox->currentText();
    QSqlQueryModel *model=new QSqlQueryModel;
    QString b;
    if(a == "东校区")
         b = "select xinxi from xiaoqu where xiaoquID == 2";
    else if(a == "南校区")
         b = "select xinxi from xiaoqu where xiaoquID == 1";
    else if(a == "北校区")
         b = "select xinxi from xiaoqu where xiaoquID == 3";
    else if(a == "深圳校区")
         b = "select xinxi from xiaoqu where xiaoquID == 5";
    else
         b = "select xinxi from xiaoqu where xiaoquID == 4";

        model->setQuery(b);
        QModelIndex indexl = model->index(0,0);
        QString word = indexl.data().toString();
        ui->textBrowser_2->setText(word);
}

void xiaoqu::on_pushButton_4_clicked()
{
    QString a = ui->comboBox->currentText();
    QSqlQueryModel *model=new QSqlQueryModel;
    QString b;
    if(a == "东校区")
         b = "select zhuanyeshezhi from xiaoqu where xiaoquID == 2";
    else if(a == "南校区")
         b = "select zhuanyeshezhi from xiaoqu where xiaoquID == 1";
    else if(a == "北校区")
         b = "select zhuanyeshezhi from xiaoqu where xiaoquID == 3";
    else if(a == "深圳校区")
         b = "select zhuanyeshezhi from xiaoqu where xiaoquID == 5";
    else
         b = "select zhuanyeshezhi from xiaoqu where xiaoquID == 4";

        model->setQuery(b);
        QModelIndex indexl = model->index(0,0);
        QString word = indexl.data().toString();
        ui->textBrowser->setText(word);
}

void xiaoqu::on_pushButton_clicked()
{
    new_photo->show();

}
