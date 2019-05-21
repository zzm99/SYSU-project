#include "xinwen_neiye.h"
#include "ui_xinwen_neiye.h"

xinwen_neiye::xinwen_neiye(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::xinwen_neiye)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);//固定大小
}

xinwen_neiye::~xinwen_neiye()
{
    delete ui;
}
