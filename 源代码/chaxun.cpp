#include "chaxun.h"
#include "ui_chaxun.h"
#include <QDesktopServices>
#include<QUrl>
#include<QSqlQueryModel>
#include<QString>
#include<QSettings>
#include<QProcess>
#include<QMutex>
#include<QWaitCondition>

chaxun::chaxun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chaxun)
{
    ui->setupUi(this);
}

chaxun::~chaxun()
{
    delete ui;
}

void chaxun::on_LinkButton_news_zhuye_2_clicked()
{
     new_zhuanye->show();
     this->lower();
}

void chaxun::on_pushButton_clicked()
{
    QString shengfen = ui->comboBox_2->currentText();
    QString xiaoqu = ui->comboBox->currentText();
    QString aihao = ui->comboBox_4->currentText();
    QString kelei = ui->comboBox_3->currentText();

    QSqlQueryModel * model = new QSqlQueryModel;
    QString a = "select zhuan from zhuanye where sheng like '%"+shengfen+"%' and xiaoqu like '%"+ xiaoqu+"%' and ke like '"+ kelei+"' and zhuan like '%"+ aihao +"%'";
    model->setQuery(a);
    QModelIndex indexl = model->index(0,0);
    QString word = indexl.data().toString();
    ui->textBrowser->setText(word);

}
