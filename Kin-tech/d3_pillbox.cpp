#include "d3_pillbox.h"
#include "ui_d3_pillbox.h"
#include <QMessageBox>

d3_pillbox::d3_pillbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::d3_pillbox),parent(parent),sessions(0)
{
    ui->setupUi(this);
    for(int x=0;x<7;++x){
        date[x]=" ";
        time[x]=" ";
    }

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

void d3_pillbox::on_session_button_clicked()
{
    QDateTime period=ui->dateTimeEdit->dateTime();
    if(sessions<7){
       date[sessions]=period.toString("dd-MM-yyyy");
       time[sessions]=period.toString("hh-mm");
       ++sessions;
    }
    else{
        QMessageBox::warning(this,"Max Sessions","You can only select 7 sessions at once");
    }

}
