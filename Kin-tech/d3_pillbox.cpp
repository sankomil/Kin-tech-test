#include "d3_pillbox.h"
#include "ui_d3_pillbox.h"
#include <QMessageBox>
#include <QScrollArea>
#include <QDebug>
#include <QString>

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


void d3_pillbox::on_pushButton_2_clicked()
{
    QString sessions[7];
    int chosen=0;
    QList<QCheckBox *> allButtons = ui->groupBox->findChildren<QCheckBox *>();
    for(int i = 0; i < allButtons.size(); ++i)
    {
        if(allButtons.at(i)->isChecked()){
            ++chosen;
        }
    }
    if(chosen>=8){QMessageBox::critical(this,"Error","Please select only 7 sessions or less");}
    else{
        int pos=0;
        for(int i = 0; i < allButtons.size(); ++i)
        {
            if(allButtons.at(i)->isChecked()){
                sessions[pos]=allButtons.at(i)->text();
            }
        }
        QMessageBox::information(this,"Confirmed","Your "+ QString::number(chosen)+" sessions have been confirmed!");
    }
}
