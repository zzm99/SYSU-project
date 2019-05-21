#ifndef XIAOQU_H
#define XIAOQU_H

#include <QWidget>
#include "photo.h"
namespace Ui {
class xiaoqu;
}

class xiaoqu : public QWidget
{
    Q_OBJECT

public:
    explicit xiaoqu(QWidget *parent = nullptr);
    ~xiaoqu();

private slots:
    void on_backb_2_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::xiaoqu *ui;
    photo *new_photo = new photo;
};

#endif // XIAOQU_H
