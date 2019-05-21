#ifndef PHOTO_H
#define PHOTO_H

#include <QWidget>

namespace Ui {
class photo;
}

class photo : public QWidget
{
    Q_OBJECT

public:
    explicit photo(QWidget *parent = nullptr);
    ~photo();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_comboBox_3_currentTextChanged(const QString &arg1);

    void on_comboBox_4_currentTextChanged(const QString &arg1);

    void on_comboBox_5_currentTextChanged(const QString &arg1);

private:
    Ui::photo *ui;
};

#endif // PHOTO_H
