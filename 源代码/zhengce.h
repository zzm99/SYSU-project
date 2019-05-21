#ifndef ZHENGCE_H
#define ZHENGCE_H

#include <QWidget>

namespace Ui {
class zhengce;
}

class zhengce : public QWidget
{
    Q_OBJECT

public:
    explicit zhengce(QWidget *parent = nullptr);
    ~zhengce();

private slots:
    void on_LinkButton_news_zhuye_2_clicked();

private:
    Ui::zhengce *ui;
};

#endif // ZHENGCE_H
