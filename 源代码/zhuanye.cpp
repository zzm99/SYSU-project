#include "zhuanye.h"
#include "ui_zhuanye.h"
#include<QSqlQueryModel>
#include<QString>
#include<QSettings>
#include<QProcess>
#include<QMutex>
#include<QWaitCondition>
#include <QDesktopServices>
#include<QUrl>

zhuanye::zhuanye(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zhuanye)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

zhuanye::~zhuanye()
{
    delete ui;
}

void zhuanye::on_comboBox_currentTextChanged(const QString &arg1)
{
    /*
    QSqlQueryModel *model=new QSqlQueryModel;
    QString a,b;
    b = ui->comboBox->currentText();
    a="select zhuan from test where yuan like '%"+b+"%'";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser_2->setText(word);
    */
}

void zhuanye::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    /*
    QString yuanxi = ui->comboBox->currentText();
    QString chengshi = ui->comboBox_2->currentText();
    QSqlQueryModel * model = new QSqlQueryModel;
    QString a = "select high from test where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%'";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser_4->setText(word);

    a = "select low from test where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_5->setText(word);

    a = "select avg from test where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_6->setText(word);
    */
}

void zhuanye::on_LinkButton_news_zhuye_2_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("http://admission.sysu.edu.cn/zs01/zs01c/index.htm")));
}

void zhuanye::on_pushButton_2_clicked()
{
    QString yuanxi = ui->comboBox->currentText();
    QString chengshi = ui->comboBox_2->currentText();
    QSqlQueryModel * model = new QSqlQueryModel;
    QString a = "select high from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%8%'";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser_4->setText(word);

    a = "select low from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%8%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_7->setText(word);

    a = "select avg from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%8%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_8->setText(word);

    a = "select high from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%7%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_5->setText(word);

    a = "select low from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%7%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_9->setText(word);

    a = "select avg from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%7%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_10->setText(word);

    a = "select high from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%6%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_6->setText(word);

    a = "select low from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%6%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_11->setText(word);

    a = "select avg from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%6%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_12->setText(word);

    a = "select xiaoqu from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%6%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser->setText(word);

    a = "select zhuan from zhuanye where yuan like '%"+yuanxi+"%' and sheng like '%"+ chengshi+"%' and nian like '%6%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_2->setText(word);

    a = "select jieshao from jieshao where yuanxi like '%"+yuanxi+"%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_3->setText(word);

    a = "select ke from zhuanye where yuan like '%"+yuanxi+"%'";
    model->setQuery(a);
    indexl = model->index(0,0);
    word = indexl.data().toString();
    ui->textBrowser_13->setText(word);
}
