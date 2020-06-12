#include "d3_cup.h"
#include "ui_d3_cup.h"
#include <QString>
#include <QMessageBox>

d3_cup::d3_cup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::d3_cup),parent(parent)
{
    ui->setupUi(this);

    for(int x=0;x<10;++x){
        ui->select_date->addItem("Timeslot "+ QString::number(x));
    }
}

d3_cup::~d3_cup()
{
    delete ui;
}



void d3_cup::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Confirmed!","Your session for "+ui->select_date->currentText()+" is confirmed");
}

void d3_cup::on_pushButton_clicked()
{
    hide();
    parent->show();
}
