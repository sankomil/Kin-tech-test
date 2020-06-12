/********************************************************************************
** Form generated from reading UI file 'd3_cup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D3_CUP_H
#define UI_D3_CUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_d3_cup
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QDateTimeEdit *dt;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *d3_cup)
    {
        if (d3_cup->objectName().isEmpty())
            d3_cup->setObjectName(QString::fromUtf8("d3_cup"));
        d3_cup->resize(740, 438);
        label = new QLabel(d3_cup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 20, 321, 71));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"MS Reference Sans Serif\";"));
        widget = new QWidget(d3_cup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 150, 371, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dt = new QDateTimeEdit(widget);
        dt->setObjectName(QString::fromUtf8("dt"));

        verticalLayout->addWidget(dt);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(d3_cup);

        QMetaObject::connectSlotsByName(d3_cup);
    } // setupUi

    void retranslateUi(QDialog *d3_cup)
    {
        d3_cup->setWindowTitle(QCoreApplication::translate("d3_cup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("d3_cup", "Select Session", nullptr));
        pushButton->setText(QCoreApplication::translate("d3_cup", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("d3_cup", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class d3_cup: public Ui_d3_cup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3_CUP_H
