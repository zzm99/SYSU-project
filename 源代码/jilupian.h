#ifndef JILUPIAN_H
#define JILUPIAN_H

#include <QWidget>

namespace Ui {
class jilupian;
}

class jilupian : public QWidget
{
    Q_OBJECT

public:
    explicit jilupian(QWidget *parent = nullptr);
    ~jilupian();

private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_LinkButton_news_zhuye_2_clicked();

private:
    Ui::jilupian *ui;
};

#endif // JILUPIAN_H
