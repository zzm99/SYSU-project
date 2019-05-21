#ifndef XINWEN_NEIYE_H
#define XINWEN_NEIYE_H

#include <QWidget>

namespace Ui {
class xinwen_neiye;
}

class xinwen_neiye : public QWidget
{
    Q_OBJECT

public:
    explicit xinwen_neiye(QWidget *parent = nullptr);
    ~xinwen_neiye();

private:
    Ui::xinwen_neiye *ui;
};

#endif // XINWEN_NEIYE_H
