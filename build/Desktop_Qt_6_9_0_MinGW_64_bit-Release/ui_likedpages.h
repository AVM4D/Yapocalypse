/********************************************************************************
** Form generated from reading UI file 'likedpages.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIKEDPAGES_H
#define UI_LIKEDPAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_likedpages
{
public:
    QListWidget *listWidget;
    QPushButton *ok;
    QLabel *label;

    void setupUi(QDialog *likedpages)
    {
        if (likedpages->objectName().isEmpty())
            likedpages->setObjectName("likedpages");
        likedpages->resize(800, 600);
        likedpages->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        listWidget = new QListWidget(likedpages);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(100, 120, 601, 401));
        QFont font;
        font.setPointSize(12);
        listWidget->setFont(font);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        ok = new QPushButton(likedpages);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(340, 540, 131, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        ok->setFont(font1);
        ok->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 12pt \"Unispace\";\n"
"border: 2px solid;\n"
"Border-radius: 10px;"));
        label = new QLabel(likedpages);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 381, 91));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/likedpagessss.png);"));

        retranslateUi(likedpages);

        QMetaObject::connectSlotsByName(likedpages);
    } // setupUi

    void retranslateUi(QDialog *likedpages)
    {
        likedpages->setWindowTitle(QCoreApplication::translate("likedpages", "Dialog", nullptr));
        ok->setText(QCoreApplication::translate("likedpages", "Back", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class likedpages: public Ui_likedpages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIKEDPAGES_H
