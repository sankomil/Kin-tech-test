#include "d1.h"
#include "ui_d1.h"
#include <QMessageBox>

d1::d1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::d1)
{
    ui->setupUi(this);
}

d1::~d1()
{
    delete ui;
}


void d1::on_back_button_clicked()
{
    QMessageBox::warning(this,"Warning","Function not set up");

}

void d1::on_pill_button_clicked()
{
    QMessageBox::warning(this,"Warning","Function not set up");
}

void d1::on_session_button_clicked()
{
    hide();
    D2=new d2(this);
    D2->show();
}
