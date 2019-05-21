#include "photo.h"
#include "ui_photo.h"

photo::photo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::photo)
{
    ui->setupUi(this);
    this->setWindowTitle("校园风光");
    ui->label_7->setStyleSheet("image: url(:/image/xingting.png);");
}

photo::~photo()
{
    delete ui;
}

void photo::on_comboBox_currentTextChanged(const QString &arg1)
{
    QString a = ui->comboBox->currentText();

    if( a == "惺亭")
        ui->label_7->setStyleSheet("image: url(:/image/xingting.png);");
    else if (a == "进士牌坊")
        ui->label_7->setStyleSheet("image: url(:/image/jinshipaifang.png);");
    else if (a == "图书馆")
        ui->label_7->setStyleSheet("image: url(:/image/tushuguan.png);");
    else if (a == "中区草坪")
        ui->label_7->setStyleSheet("image: url(:/image/zhongqucaoping.png);");
    else if (a == "格兰堂")
        ui->label_7->setStyleSheet("image: url(:/image/gelantang.png);");
    else if (a == "怀士堂")
        ui->label_7->setStyleSheet("image: url(:/image/huaishitang.png);");
    else if (a == "中山铜像")
        ui->label_7->setStyleSheet("image: url(:/image/zhongshantongxiang.png);");
    else if (a == "校训")
        ui->label_7->setStyleSheet("image: url(:/image/xiaoxun.png);");

}

void photo::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    QString a = ui->comboBox_2->currentText();

    if( a == "工学院")
        ui->label_7->setStyleSheet("image: url(:/image/gongxueyuan.png);");
    else if (a == "传播学院大楼")
        ui->label_7->setStyleSheet("image: url(:/image/chuanboxueyuandalou.png);");
    else if (a == "体育场")
        ui->label_7->setStyleSheet("image: url(:/image/tiyuchang.png);");
    else if (a == "学生宿舍区")
        ui->label_7->setStyleSheet("image: url(:/image/xueshengsushe.png);");
    else if (a == "图书馆")
        ui->label_7->setStyleSheet("image: url(:/image/dongtushuguan.png);");
    else if (a == "南北学院楼")
        ui->label_7->setStyleSheet("image: url(:/image/nanbeixueyuanlou.png);");
}




void photo::on_comboBox_3_currentTextChanged(const QString &arg1)
{
    QString a = ui->comboBox_3->currentText();

    if( a == "孙中山铜像")
        ui->label_7->setStyleSheet("image: url(:/image/sunzhongshantongxiang.png);");
    else if (a == "医学图书馆")
        ui->label_7->setStyleSheet("image: url(:/image/yixuetushuguan.png);");
    else if (a == "医学博物馆")
        ui->label_7->setStyleSheet("image: url(:/image/yixuebowuguan.png);");
    else if (a == "天使在人间")
        ui->label_7->setStyleSheet("image: url(:/image/tianshizairenjian.png);");
}

void photo::on_comboBox_4_currentTextChanged(const QString &arg1)
{
    QString a = ui->comboBox_4->currentText();

    if( a == "深圳校区俯视图")
        ui->label_7->setStyleSheet("image: url(:/image/fushi.png);");
    else if (a == "深圳校区广场")
        ui->label_7->setStyleSheet("image: url(:/image/shenzhenxiaoquguangchang.png);");

}

void photo::on_comboBox_5_currentTextChanged(const QString &arg1)
{
    QString a = ui->comboBox_5->currentText();

    if( a == "逸仙大道")
        ui->label_7->setStyleSheet("image: url(:/image/yixiandadao.png);");
    else if (a == "图书馆")
        ui->label_7->setStyleSheet("image: url(:/image/zhuhaitushuguan.png);");
    else if (a == "教学实验大楼")
        ui->label_7->setStyleSheet("image: url(:/image/jiaoxueshiyandalou.png);");
    else if (a == "风雨操场")
        ui->label_7->setStyleSheet("image: url(:/image/fengyucaochang.png);");
    else if (a == "校园全景")
        ui->label_7->setStyleSheet("image: url(:/image/xiaoyuanquanjing.png);");
    else if (a == "隐湖畔")
        ui->label_7->setStyleSheet("image: url(:/image/yinhupan.png);");

}
