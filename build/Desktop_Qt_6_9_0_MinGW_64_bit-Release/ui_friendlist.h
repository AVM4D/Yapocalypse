/********************************************************************************
** Form generated from reading UI file 'friendlist.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDLIST_H
#define UI_FRIENDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FriendList
{
public:
    QPushButton *back;
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *FriendList)
    {
        if (FriendList->objectName().isEmpty())
            FriendList->setObjectName("FriendList");
        FriendList->resize(800, 600);
        FriendList->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        back = new QPushButton(FriendList);
        back->setObjectName("back");
        back->setGeometry(QRect(330, 540, 141, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 13pt \"Unispace\";\n"
"border: 2px solid;\n"
"Border-radius: 10px;\n"
"border-color: rgb(255, 0, 127);"));
        listWidget = new QListWidget(FriendList);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(120, 131, 561, 381));
        QFont font1;
        font1.setPointSize(12);
        listWidget->setFont(font1);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        label = new QLabel(FriendList);
        label->setObjectName("label");
        label->setGeometry(QRect(190, -10, 421, 121));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/frensss.png);"));

        retranslateUi(FriendList);

        QMetaObject::connectSlotsByName(FriendList);
    } // setupUi

    void retranslateUi(QDialog *FriendList)
    {
        FriendList->setWindowTitle(QCoreApplication::translate("FriendList", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("FriendList", "Back", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FriendList: public Ui_FriendList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDLIST_H
