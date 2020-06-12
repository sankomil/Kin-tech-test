#include "d3_cup.h"
#include "ui_d3_cup.h"
#include <QString>
#include <QMessageBox>

d3_cup::d3_cup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::d3_cup),parent(parent)
{
    ui->setupUi(this);


}

d3_cup::~d3_cup()
{
    delete ui;
}



void d3_cup::on_pushButton_2_clicked()
{
    QDateTime time= ui->dt->dateTime();
    QMessageBox::information(this, "Confirmed!","Your session on "+time.toString("dd-MM-yyyy")+ " at "+time.toString("hh:mm")+ " is confirmed!");
}

void d3_cup::on_pushButton_clicked()
{
    hide();
    parent->show();
}
