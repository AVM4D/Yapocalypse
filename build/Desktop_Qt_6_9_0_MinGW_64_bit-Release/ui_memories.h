/********************************************************************************
** Form generated from reading UI file 'memories.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMORIES_H
#define UI_MEMORIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_memories
{
public:
    QListWidget *listWidget;
    QPushButton *back;
    QPushButton *share;
    QLabel *label;

    void setupUi(QDialog *memories)
    {
        if (memories->objectName().isEmpty())
            memories->setObjectName("memories");
        memories->resize(800, 700);
        memories->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        listWidget = new QListWidget(memories);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 70, 700, 571));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        back = new QPushButton(memories);
        back->setObjectName("back");
        back->setGeometry(QRect(420, 650, 120, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"font: 700 16pt \"Unispace\";\n"
"Border-radius: 10px;\n"
"background-color: rgb(255, 0, 255);\n"
"background-color: rgb(255, 0, 127);"));
        share = new QPushButton(memories);
        share->setObjectName("share");
        share->setGeometry(QRect(260, 650, 121, 35));
        share->setFont(font);
        share->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"font: 700 16pt \"Unispace\";\n"
"Border-radius: 10px;\n"
"background-color: rgb(255, 0, 255);"));
        label = new QLabel(memories);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 10, 351, 51));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/memoreeeez.png);"));

        retranslateUi(memories);

        QMetaObject::connectSlotsByName(memories);
    } // setupUi

    void retranslateUi(QDialog *memories)
    {
        memories->setWindowTitle(QCoreApplication::translate("memories", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("memories", "Back", nullptr));
        share->setText(QCoreApplication::translate("memories", "Share", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memories: public Ui_memories {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMORIES_H
