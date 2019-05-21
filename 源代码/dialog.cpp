#include "dialog.h"
#include "ui_dialog.h"
#include <QVBoxLayout>

Dialog::Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Dialog)
{
  ui->setupUi(this);

  lineUrl = new QLineEdit;
  lineUrl->setText("http://news2.sysu.edu.cn/");
  connect(lineUrl,SIGNAL(returnPressed()),this,SLOT(loadNavigate()));

  webWidget = new QAxWidget;
  //设置ActiveX控件为IEMicrosoft Web Browser
  //设置ActiveX控件的id，最有效的方式就是使用UUID
  //此处的{8856F961-340A-11D0-A96B-00C04FD705A2}就是Microsoft Web Browser控件的UUID
  webWidget->setControl(QString::fromUtf8("{8856F961-340A-11D0-A96B-00C04FD705A2}"));
  webWidget->setObjectName(QString::fromUtf8("webWidget"));//设置控件的名称
  webWidget->setFocusPolicy(Qt::StrongFocus);//设置控件接收键盘焦点的方式：鼠标单击、Tab键
  webWidget->setProperty("DisplayAlerts",false); //不显示任何警告信息。
  webWidget->setProperty("DisplayScrollBars",true); // 显示滚动条

  QVBoxLayout *mainLayout = new QVBoxLayout;
  mainLayout->addWidget(lineUrl);
  mainLayout->addWidget(webWidget);
  setLayout(mainLayout);

  //setWindowState(Qt::WindowMaximized);//最大化
}

Dialog::~Dialog()
{
  delete ui;
}

void Dialog::loadNavigate()
{
  QString sUrl = lineUrl->text().trimmed();
  webWidget->dynamicCall("Navigate(const QString&)",sUrl);
}
