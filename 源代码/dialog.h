#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <ActiveQt/QAxWidget>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
  Q_OBJECT

public:
  explicit Dialog(QWidget *parent = 0);
  ~Dialog();

private slots:
  void loadNavigate();

private:
  Ui::Dialog *ui;
  QLineEdit *lineUrl;
  QAxWidget* webWidget;
};

#endif
