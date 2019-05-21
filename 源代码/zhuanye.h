#ifndef ZHUANYE_H
#define ZHUANYE_H

#include <QWidget>

namespace Ui {
class zhuanye;
}

class zhuanye : public QWidget
{
    Q_OBJECT

public:
    explicit zhuanye(QWidget *parent = nullptr);
    ~zhuanye();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_LinkButton_news_zhuye_2_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::zhuanye *ui;
};

#endif // ZHUANYE_H
