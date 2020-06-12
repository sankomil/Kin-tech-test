#include "d3_pillbox.h"
#include "ui_d3_pillbox.h"

d3_pillbox::d3_pillbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::d3_pillbox),parent(parent)
{
    ui->setupUi(this);
}

d3_pillbox::~d3_pillbox()
{
    delete ui;
}

void d3_pillbox::on_pushButton_clicked()
{
    hide();
    parent->show();
}
