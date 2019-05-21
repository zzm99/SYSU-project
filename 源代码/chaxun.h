#ifndef CHAXUN_H
#define CHAXUN_H

#include <QWidget>
#include "zhuanye.h"
namespace Ui {
class chaxun;
}

class chaxun : public QWidget
{
    Q_OBJECT

public:
    explicit chaxun(QWidget *parent = nullptr);
    ~chaxun();

private slots:
    void on_LinkButton_news_zhuye_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::chaxun *ui;
    zhuanye *new_zhuanye = new zhuanye;
};

#endif // CHAXUN_H
