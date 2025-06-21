/********************************************************************************
** Form generated from reading UI file 'createpost.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPOST_H
#define UI_CREATEPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_createpost
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *share;
    QLabel *label_4;

    void setupUi(QDialog *createpost)
    {
        if (createpost->objectName().isEmpty())
            createpost->setObjectName("createpost");
        createpost->resize(1080, 720);
        createpost->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        comboBox = new QComboBox(createpost);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(780, 280, 241, 50));
        comboBox->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 20pt \"Unispace\";\n"
"text-align:centre;"));
        label = new QLabel(createpost);
        label->setObjectName("label");
        label->setGeometry(QRect(780, 210, 100, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 700 20pt \"Unispace\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(createpost);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 210, 171, 50));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 700 20pt \"Unispace\";"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(createpost);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 400, 220, 50));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 700 20pt \"Unispace\";"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        textEdit = new QTextEdit(createpost);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 280, 681, 91));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 12pt \"Unispace\";"));
        textEdit_2 = new QTextEdit(createpost);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(40, 480, 981, 101));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 12pt \"Unispace\";"));
        share = new QPushButton(createpost);
        share->setObjectName("share");
        share->setGeometry(QRect(480, 630, 120, 35));
        share->setFont(font);
        share->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    selection-background-color: rgb(255, 2, 209);\n"
"    font: 700 20pt \"Unispace\";\n"
"    background-color: rgb(255, 0, 255);\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 0, 127);\n"
"    border: 2px solid red; \n"
"    color: white;\n"
"}\n"
""));
        label_4 = new QLabel(createpost);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(405, 10, 271, 161));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/createpost.png);"));

        retranslateUi(createpost);

        QMetaObject::connectSlotsByName(createpost);
    } // setupUi

    void retranslateUi(QDialog *createpost)
    {
        createpost->setWindowTitle(QCoreApplication::translate("createpost", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("createpost", "Shared", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("createpost", "Feeling", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("createpost", "Thinking About", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("createpost", "Making", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("createpost", "Celebrating", nullptr));

        label->setText(QCoreApplication::translate("createpost", "Type", nullptr));
        label_2->setText(QCoreApplication::translate("createpost", "Activity", nullptr));
        label_3->setText(QCoreApplication::translate("createpost", "Description", nullptr));
        share->setText(QCoreApplication::translate("createpost", "Share", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class createpost: public Ui_createpost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPOST_H
