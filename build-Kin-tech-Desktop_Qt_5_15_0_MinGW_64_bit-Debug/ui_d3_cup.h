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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
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
        layoutWidget = new QWidget(d3_cup);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 310, 249, 89));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton_2);

        scrollArea = new QScrollArea(d3_cup);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(210, 120, 281, 131));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 258, 287));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup = new QButtonGroup(d3_cup);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_6);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_7);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        verticalLayout->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_8);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        verticalLayout->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_9);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        verticalLayout->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(radioButton_10);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        verticalLayout->addWidget(radioButton_10);


        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(d3_cup);

        QMetaObject::connectSlotsByName(d3_cup);
    } // setupUi

    void retranslateUi(QDialog *d3_cup)
    {
        d3_cup->setWindowTitle(QCoreApplication::translate("d3_cup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("d3_cup", "Select Session", nullptr));
        pushButton->setText(QCoreApplication::translate("d3_cup", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("d3_cup", "Confirm", nullptr));
        radioButton->setText(QCoreApplication::translate("d3_cup", "Slot 1", nullptr));
        radioButton_2->setText(QCoreApplication::translate("d3_cup", "Slot 2", nullptr));
        radioButton_3->setText(QCoreApplication::translate("d3_cup", "Slot 3", nullptr));
        radioButton_4->setText(QCoreApplication::translate("d3_cup", "Slot 4", nullptr));
        radioButton_5->setText(QCoreApplication::translate("d3_cup", "Slot 5", nullptr));
        radioButton_6->setText(QCoreApplication::translate("d3_cup", "Slot 6", nullptr));
        radioButton_7->setText(QCoreApplication::translate("d3_cup", "Slot 7", nullptr));
        radioButton_8->setText(QCoreApplication::translate("d3_cup", "Slot 8", nullptr));
        radioButton_9->setText(QCoreApplication::translate("d3_cup", "Slot 9", nullptr));
        radioButton_10->setText(QCoreApplication::translate("d3_cup", "Slot 10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class d3_cup: public Ui_d3_cup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3_CUP_H
