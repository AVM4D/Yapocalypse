/********************************************************************************
** Form generated from reading UI file 'post.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POST_H
#define UI_POST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_post
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QListWidget *listWidget;
    QPushButton *like;
    QPushButton *postComment;
    QPushButton *exit;
    QTextEdit *textEdit_3;
    QLabel *label;
    QListWidget *listWidget_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *noOfCom;
    QLabel *date;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *post)
    {
        if (post->objectName().isEmpty())
            post->setObjectName("post");
        post->resize(1257, 642);
        QFont font;
        font.setPointSize(24);
        post->setFont(font);
        post->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        textEdit = new QTextEdit(post);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(390, 40, 581, 40));
        textEdit->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Unispace\";\n"
"Border-radius: 10px;\n"
"background-color: rgb(85, 0, 255);\n"
"text-align:centre;\n"
"padding: 5px"));
        textEdit_2 = new QTextEdit(post);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(390, 90, 581, 100));
        textEdit_2->setStyleSheet(QString::fromUtf8("text-align:centre;\n"
"Border-radius: 10px;\n"
"background-color: rgb(141, 1, 255);\n"
"font: 700 12pt \"Unispace\";\n"
"padding: 5px;"));
        listWidget = new QListWidget(post);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(170, 300, 801, 151));
        listWidget->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Unispace\";\n"
"Border-radius: 10px;\n"
"background-color: rgb(85, 0, 255);\n"
"text-align:centre;\n"
"padding: 5px;"));
        like = new QPushButton(post);
        like->setObjectName("like");
        like->setGeometry(QRect(1000, 280, 241, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        like->setFont(font1);
        like->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"font: 700 16pt \"Unispace\";\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"	background-color: rgb(170, 0, 255);\n"
"}\n"
""));
        postComment = new QPushButton(post);
        postComment->setObjectName("postComment");
        postComment->setGeometry(QRect(910, 520, 91, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Unispace")});
        font2.setPointSize(19);
        font2.setBold(true);
        font2.setItalic(false);
        postComment->setFont(font2);
        postComment->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{font: 700 19pt \"Unispace\";\n"
"Border-radius: 10px;\n"
"background-color: rgb(255, 0, 255);}\n"
"QPushButton:Hover{\n"
"	\n"
"	background-color: rgb(255, 0, 127);\n"
"}\n"
""));
        exit = new QPushButton(post);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(1140, 590, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Unispace")});
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setItalic(false);
        exit->setFont(font3);
        exit->setStyleSheet(QString::fromUtf8("QPushButton:Hover{\n"
"	background-color: rgb(85, 0, 255);\n"
"}\n"
"\n"
"QPushButton{background-color: rgb(255, 0, 127);\n"
"font: 700 22pt \"Unispace\";\n"
"Border-radius: 10px;\n"
"}"));
        textEdit_3 = new QTextEdit(post);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(240, 520, 661, 81));
        textEdit_3->setStyleSheet(QString::fromUtf8("text-align:centre;\n"
"Border-radius: 10px;\n"
"background-color: rgb(141, 1, 255);\n"
"font: 700 12pt \"Unispace\";\n"
"padding: 5px;"));
        label = new QLabel(post);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 520, 211, 41));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"font: 700 16pt \"Unispace\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        listWidget_2 = new QListWidget(post);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(1000, 80, 241, 191));
        listWidget_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Unispace\";\n"
"Border-radius: 10px;\n"
"background-color: rgb(85, 0, 255);\n"
"text-align:centre;\n"
"padding: 5px;"));
        label_2 = new QLabel(post);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1000, 40, 241, 31));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 16pt \"Unispace\";"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(post);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 300, 141, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Unispace")});
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setItalic(false);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 18pt \"Unispace\";\n"
""));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        noOfCom = new QLabel(post);
        noOfCom->setObjectName("noOfCom");
        noOfCom->setGeometry(QRect(800, 460, 171, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Unispace")});
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        noOfCom->setFont(font5);
        noOfCom->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Unispace\";\n"
"Border-radius: 10px;\n"
"text-align:centre;\n"
"background-color: rgb(255, 0, 127);\n"
"padding: 5px;"));
        noOfCom->setAlignment(Qt::AlignmentFlag::AlignCenter);
        date = new QLabel(post);
        date->setObjectName("date");
        date->setGeometry(QRect(850, 210, 121, 41));
        date->setFont(font5);
        date->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Unispace\";\n"
"Border-radius: 10px;\n"
"background-color: rgb(85, 0, 255);\n"
"text-align:centre;\n"
"padding: 5px;"));
        label_5 = new QLabel(post);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 40, 211, 161));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/yapp.png);"));
        label_3 = new QLabel(post);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 40, 110, 40));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 16pt \"Unispace\";"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(post);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 90, 110, 100));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"font: 700 16pt \"Unispace\";"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(post);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(780, 210, 61, 41));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"font: 700 16pt \"Unispace\";"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(post);

        QMetaObject::connectSlotsByName(post);
    } // setupUi

    void retranslateUi(QDialog *post)
    {
        post->setWindowTitle(QCoreApplication::translate("post", "Dialog", nullptr));
        like->setText(QCoreApplication::translate("post", "Like", nullptr));
        postComment->setText(QCoreApplication::translate("post", "Send", nullptr));
        exit->setText(QCoreApplication::translate("post", "Back", nullptr));
        label->setText(QCoreApplication::translate("post", "Drop a Comment", nullptr));
        label_2->setText(QCoreApplication::translate("post", "Liked By", nullptr));
        label_4->setText(QCoreApplication::translate("post", "Comments", nullptr));
        noOfCom->setText(QString());
        date->setText(QString());
        label_5->setText(QString());
        label_3->setText(QCoreApplication::translate("post", "Activity", nullptr));
        label_6->setText(QCoreApplication::translate("post", "Content", nullptr));
        label_7->setText(QCoreApplication::translate("post", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class post: public Ui_post {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POST_H
