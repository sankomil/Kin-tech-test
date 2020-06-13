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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_d3_cup
{
public:
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *d3_cup)
    {
        if (d3_cup->objectName().isEmpty())
            d3_cup->setObjectName(QString::fromUtf8("d3_cup"));
        d3_cup->resize(740, 438);
        label = new QLabel(d3_cup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 20, 321, 71));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"MS Reference Sans Serif\";"));
        scrollArea = new QScrollArea(d3_cup);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(210, 110, 311, 181));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 288, 287));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButton = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup = new QButtonGroup(d3_cup);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        sizePolicy.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        sizePolicy.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        sizePolicy.setHeightForWidth(radioButton_4->sizePolicy().hasHeightForWidth());
        radioButton_4->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        sizePolicy.setHeightForWidth(radioButton_5->sizePolicy().hasHeightForWidth());
        radioButton_5->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_6);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        sizePolicy.setHeightForWidth(radioButton_6->sizePolicy().hasHeightForWidth());
        radioButton_6->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_7);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        sizePolicy.setHeightForWidth(radioButton_7->sizePolicy().hasHeightForWidth());
        radioButton_7->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_8);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButton_8->sizePolicy().hasHeightForWidth());
        radioButton_8->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_9);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        sizePolicy1.setHeightForWidth(radioButton_9->sizePolicy().hasHeightForWidth());
        radioButton_9->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_10);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        sizePolicy1.setHeightForWidth(radioButton_10->sizePolicy().hasHeightForWidth());
        radioButton_10->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(radioButton_10);


        verticalLayout_2->addLayout(verticalLayout_3);

        scrollArea->setWidget(scrollAreaWidgetContents);
        widget = new QWidget(d3_cup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(240, 310, 249, 89));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(d3_cup);

        QMetaObject::connectSlotsByName(d3_cup);
    } // setupUi

    void retranslateUi(QDialog *d3_cup)
    {
        d3_cup->setWindowTitle(QCoreApplication::translate("d3_cup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("d3_cup", "Select Session", nullptr));
        radioButton->setText(QCoreApplication::translate("d3_cup", "Slot1", nullptr));
        radioButton_2->setText(QCoreApplication::translate("d3_cup", "Slot2", nullptr));
        radioButton_3->setText(QCoreApplication::translate("d3_cup", "Slot3", nullptr));
        radioButton_4->setText(QCoreApplication::translate("d3_cup", "Slot4", nullptr));
        radioButton_5->setText(QCoreApplication::translate("d3_cup", "Slot5", nullptr));
        radioButton_6->setText(QCoreApplication::translate("d3_cup", "Slot6", nullptr));
        radioButton_7->setText(QCoreApplication::translate("d3_cup", "Slot7", nullptr));
        radioButton_8->setText(QCoreApplication::translate("d3_cup", "Slot8", nullptr));
        radioButton_9->setText(QCoreApplication::translate("d3_cup", "Slot9", nullptr));
        radioButton_10->setText(QCoreApplication::translate("d3_cup", "Slot10", nullptr));
        pushButton->setText(QCoreApplication::translate("d3_cup", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("d3_cup", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class d3_cup: public Ui_d3_cup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3_CUP_H
