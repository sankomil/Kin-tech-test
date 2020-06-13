#include "d3_cup.h"
#include "ui_d3_cup.h"
#include <QString>
#include <QMessageBox>
#include <QButtonGroup>

d3_cup::d3_cup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::d3_cup),parent(parent)
{
    ui->setupUi(this);
    ui->buttonGroup->setId(ui->radioButton,0);
    ui->buttonGroup->setId(ui->radioButton_2,1);
    ui->buttonGroup->setId(ui->radioButton_3,2);
    ui->buttonGroup->setId(ui->radioButton_4,3);
    ui->buttonGroup->setId(ui->radioButton_5,4);
    ui->buttonGroup->setId(ui->radioButton_6,5);
    ui->buttonGroup->setId(ui->radioButton_7,6);
    ui->buttonGroup->setId(ui->radioButton_8,7);
    ui->buttonGroup->setId(ui->radioButton_9,8);
    ui->buttonGroup->setId(ui->radioButton_10,9);

}

d3_cup::~d3_cup()
{
    delete ui;
}



void d3_cup::on_pushButton_2_clicked()
{

    QMessageBox::information(this,"chec","Your session for Slot"+QString::number(1+ui->buttonGroup->checkedId())+" is confirmed!");

    //QDateTime time= ui->dt->dateTime();
    //QMessageBox::information(this, "Confirmed!","Your session on "+time.toString("dd-MM-yyyy")+ " at "+time.toString("hh:mm")+ " is confirmed!");
}

void d3_cup::on_pushButton_clicked()
{
    hide();
    parent->show();
}
