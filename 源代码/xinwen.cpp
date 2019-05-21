#include "xinwen.h"
#include "ui_xinwen.h"
#include<QSqlQueryModel>
#include<QString>
#include<QSettings>
#include<QProcess>
#include<QMutex>
#include<QWaitCondition>
#include <QDesktopServices>
#include<QUrl>

xinwen::xinwen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xinwen)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

xinwen::~xinwen()
{
    delete ui;
}

void xinwen::on_LinkButton_news_zhuye_2_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://news2.sysu.edu.cn/")));
    //new_dialog->show();
}

void xinwen::on_LinkButton_xinwen0_clicked()
{
    //QDesktopServices::openUrl(QUrl(QLatin1String("https://www.thepaper.cn/newsDetail_forward_1934650")));
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 15";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen1_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 1";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen2_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 2";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen2_2_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 3";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen2_3_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 5";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen2_4_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 6";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen2_5_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 7";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen2_6_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 8";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen2_7_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 9";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen2_8_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 10";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}

void xinwen::on_xinwen2_9_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a="select xinwenText from xinwen where xinwenID == 12";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);
}
