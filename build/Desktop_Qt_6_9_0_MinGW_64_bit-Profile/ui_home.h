/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *back;

    void setupUi(QDialog *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName("home");
        home->resize(800, 700);
        home->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        listWidget = new QListWidget(home);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 70, 700, 571));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 0, 255);\n"
"selection-background-color: rgb(255, 0, 255);\n"
"border-color: rgb(0, 0, 127);\n"
"border-radius:4px;\n"
"selection-color: rgb(255, 0, 255);"));
        label = new QLabel(home);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 10, 421, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Unispace\";\n"
"background-color: rgb(255, 0, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back = new QPushButton(home);
        back->setObjectName("back");
        back->setGeometry(QRect(340, 650, 120, 30));
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"border: 2px solid;\n"
"Border-radius: 10px;\n"
"border-color: rgb(255, 0, 127);\n"
"font: 700 12pt \"Unispace\";"));

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QDialog *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "Dialog", nullptr));
        label->setText(QString());
        back->setText(QCoreApplication::translate("home", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
