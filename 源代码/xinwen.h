#ifndef XINWEN_H
#define XINWEN_H

#include <QWidget>
#include "dialog.h"

namespace Ui {
class xinwen;
}

class xinwen : public QWidget
{
    Q_OBJECT

public:
    explicit xinwen(QWidget *parent = nullptr);
    ~xinwen();

private slots:
    void on_LinkButton_news_zhuye_2_clicked();

    void on_LinkButton_xinwen0_clicked();

    void on_xinwen1_clicked();

    void on_xinwen2_clicked();

    void on_xinwen2_2_clicked();

    void on_xinwen2_3_clicked();

    void on_xinwen2_4_clicked();

    void on_xinwen2_5_clicked();

    void on_xinwen2_6_clicked();

    void on_xinwen2_7_clicked();

    void on_xinwen2_8_clicked();

    void on_xinwen2_9_clicked();

private:
    Ui::xinwen *ui;
    Dialog * new_dialog = new Dialog;

};

#endif // XINWEN_H
