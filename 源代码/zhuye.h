#ifndef ZHUYE_H
#define ZHUYE_H

#include <QMainWindow>
#include "zhuanye.h"
#include "xiaoqu.h"
#include "chaxun.h"
#include "xinwen.h"
#include "jilupian.h"
#include "zhengce.h"

namespace Ui {
class zhuye;
}

class zhuye : public QMainWindow
{
    Q_OBJECT

public:
    explicit zhuye(QWidget *parent = nullptr);
    ~zhuye();

private slots:
    void on_LinkButton_zhaunyechaxun_clicked();
    void on_LinkButton_xiaoqu_clicked();
    void on_LinkButton_zhuanyeluqu_clicked();
    void on_LinkButton_xinwen_clicked();
    void on_LinkButton_jilupian_clicked();
    void on_LinkButton_zhengce_clicked();
    void observer_open();

private:
    Ui::zhuye *ui;
    zhuanye *new_zhuanye = new zhuanye;
    xiaoqu *new_xiaoqu = new xiaoqu;
    chaxun *new_chaxun = new chaxun;
    xinwen *new_xinwen = new xinwen;
    jilupian *new_jilupian = new jilupian;
    zhengce *new_zhengce = new zhengce;
};

#endif // ZHUYE_H
