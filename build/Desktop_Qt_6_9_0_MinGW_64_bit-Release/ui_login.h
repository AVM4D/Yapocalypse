/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *Continue;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_4;
    QLabel *label_5;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(1280, 720);
        login->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        Continue = new QPushButton(login);
        Continue->setObjectName("Continue");
        Continue->setGeometry(QRect(550, 570, 171, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Unispace")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        Continue->setFont(font);
        Continue->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"color: rgb(255, 255, 255);\n"
"font: 700 18pt \"Unispace\";\n"
"background-color: rgb(255, 0, 255);\n"
"Border-radius: 20px;"));
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 340, 250, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 700 28pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
"color: rgb(85, 0, 255);\n"
"\n"
"color:white;\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_username = new QLineEdit(login);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(590, 340, 371, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Unispace")});
        font2.setPointSize(32);
        font2.setBold(true);
        font2.setItalic(false);
        lineEdit_username->setFont(font2);
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 700 32pt \"Unispace\";\n"
"color:white;\n"
"selection-background-color: rgb(255, 0, 255);"));
        lineEdit_username->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_password = new QLineEdit(login);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(590, 400, 371, 50));
        lineEdit_password->setFont(font2);
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 700 32pt \"Unispace\";\n"
"color:white;\n"
"selection-background-color: rgb(255, 0, 255);"));
        lineEdit_password->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dateEdit = new QDateEdit(login);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(590, 460, 371, 50));
        dateEdit->setFont(font2);
        dateEdit->setMouseTracking(false);
        dateEdit->setFocusPolicy(Qt::FocusPolicy::WheelFocus);
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 700 32pt \"Unispace\";\n"
"color:white;\n"
"selection-background-color: rgb(255, 0, 255);"));
        dateEdit->setInputMethodHints(Qt::InputMethodHint::ImhPreferNumbers);
        dateEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dateEdit->setDateTime(QDateTime(QDate(2025, 5, 13), QTime(13, 0, 0)));
        label_4 = new QLabel(login);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 400, 250, 50));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("font: 700 28pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
"color: rgb(0, 118, 0);\n"
"color:white;\n"
""));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 460, 250, 50));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("font: 700 28pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
"color: rgb(0, 118, 0);\n"
"color:white;\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(490, 10, 301, 121));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/aaa.PNG);"));
        frame = new QFrame(login);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-30, 640, 1371, 20));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::HLine);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        frame->setLineWidth(20);
        frame_2 = new QFrame(login);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-40, 140, 1351, 20));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::Shape::HLine);
        frame_2->setFrameShadow(QFrame::Shadow::Plain);
        frame_2->setLineWidth(20);
        frame_3 = new QFrame(login);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(290, 310, 701, 231));
        frame_3->setStyleSheet(QString::fromUtf8("\n"
"background-color: transparent;\n"
"border: 5px;\n"
"border-color: rgb(255, 0, 255);"));
        frame_3->setFrameShape(QFrame::Shape::Box);
        frame_3->setFrameShadow(QFrame::Shadow::Plain);
        frame_3->setLineWidth(1);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 701, 231));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 5px solid rgb(85, 0, 255); \n"
""));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(login);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(450, 180, 381, 101));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Screenshot 2025-05-03 yappin.png);"));
        frame_3->raise();
        Continue->raise();
        label->raise();
        lineEdit_username->raise();
        lineEdit_password->raise();
        dateEdit->raise();
        label_4->raise();
        label_2->raise();
        label_3->raise();
        frame->raise();
        frame_2->raise();
        label_5->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        Continue->setText(QCoreApplication::translate("login", "Continue", nullptr));
        label->setText(QCoreApplication::translate("login", "User Name:", nullptr));
        label_4->setText(QCoreApplication::translate("login", "Password:", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Date:", nullptr));
        label_3->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
