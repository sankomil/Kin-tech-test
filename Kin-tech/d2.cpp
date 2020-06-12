#include "d2.h"
#include "ui_d2.h"

d2::d2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::d2)
{
    ui->setupUi(this);
}

d2::~d2()
{
    delete ui;
}

void d2::on_box_button_clicked()
{
    hide();
    Pillbox=new d3_pillbox(this);
    Pillbox->show();
}

void d2::on_cup_button_clicked()
{
    hide();
    Cup=new d3_cup(this);
    Cup->show();
}
