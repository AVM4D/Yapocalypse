/********************************************************************************
** Form generated from reading UI file 'pagetimeline.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGETIMELINE_H
#define UI_PAGETIMELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pagetimeline
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *back;
    QLabel *label_2;

    void setupUi(QDialog *pagetimeline)
    {
        if (pagetimeline->objectName().isEmpty())
            pagetimeline->setObjectName("pagetimeline");
        pagetimeline->resize(800, 700);
        pagetimeline->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        listWidget = new QListWidget(pagetimeline);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 140, 700, 491));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        label = new QLabel(pagetimeline);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 80, 701, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 22pt \"Unispace\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back = new QPushButton(pagetimeline);
        back->setObjectName("back");
        back->setGeometry(QRect(350, 650, 120, 30));
        back->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 0, 255);\n"
"border: 2px solid;\n"
"Border-radius: 10px;\n"
"border-color: rgb(255, 0, 127);\n"
"font: 700 16pt \"Unispace\";"));
        label_2 = new QLabel(pagetimeline);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 10, 251, 61));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/timelineeeee.png);"));

        retranslateUi(pagetimeline);

        QMetaObject::connectSlotsByName(pagetimeline);
    } // setupUi

    void retranslateUi(QDialog *pagetimeline)
    {
        pagetimeline->setWindowTitle(QCoreApplication::translate("pagetimeline", "Dialog", nullptr));
        label->setText(QString());
        back->setText(QCoreApplication::translate("pagetimeline", "Back", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pagetimeline: public Ui_pagetimeline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGETIMELINE_H
