#include "logindialog.h"
#include "ui_logindialog.h"
#include<QMessageBox>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if(ui->usrLineEdit->text().trimmed()==tr("LZWYW")&&
            ui->pwdLineEdit->text()==tr("990618"))
    {
    accept();
    }
    else
    {
        QMessageBox::warning(this,tr("警告！"),
                             tr("用户名或密码错误"),
                QMessageBox::Yes);
        ui->usrLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->usrLineEdit->setFocus();
    }
}
