/********************************************************************************
** Form generated from reading UI file 'sharememory.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREMEMORY_H
#define UI_SHAREMEMORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_shareMemory
{
public:
    QTextEdit *textEdit;
    QLabel *label_3;
    QPushButton *share;

    void setupUi(QDialog *shareMemory)
    {
        if (shareMemory->objectName().isEmpty())
            shareMemory->setObjectName("shareMemory");
        shareMemory->resize(600, 400);
        shareMemory->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        textEdit = new QTextEdit(shareMemory);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 100, 561, 241));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 700 18pt \"Unispace\";"));
        label_3 = new QLabel(shareMemory);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 40, 561, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 18pt \"Unispace\";"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        share = new QPushButton(shareMemory);
        share->setObjectName("share");
        share->setGeometry(QRect(240, 350, 120, 35));
        share->setFont(font);
        share->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"Border-radius: 10px;\n"
"background-color: rgb(255, 0, 127);\n"
"font: 700 18pt \"Unispace\";"));

        retranslateUi(shareMemory);

        QMetaObject::connectSlotsByName(shareMemory);
    } // setupUi

    void retranslateUi(QDialog *shareMemory)
    {
        shareMemory->setWindowTitle(QCoreApplication::translate("shareMemory", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("shareMemory", "Say Something About This", nullptr));
        share->setText(QCoreApplication::translate("shareMemory", "Share", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shareMemory: public Ui_shareMemory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREMEMORY_H
