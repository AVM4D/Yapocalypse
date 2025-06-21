/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QLabel *greet;
    QLabel *label;
    QFrame *frame_3;
    QFrame *frame_4;
    QLabel *label_2;
    QFrame *frame;
    QPushButton *viewFriendsList;
    QPushButton *memories;
    QPushButton *createPost;
    QPushButton *switchUser;
    QPushButton *viewLikedPages;
    QPushButton *viewTimeline;
    QPushButton *viewHome;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(1280, 720);
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        greet = new QLabel(menu);
        greet->setObjectName("greet");
        greet->setGeometry(QRect(0, 90, 1301, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        greet->setFont(font);
        greet->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        label = new QLabel(menu);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 0, 361, 91));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/aaa.PNG);"));
        frame_3 = new QFrame(menu);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(-50, 130, 1331, 20));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::Shape::HLine);
        frame_3->setFrameShadow(QFrame::Shadow::Plain);
        frame_3->setLineWidth(20);
        frame_4 = new QFrame(menu);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(-50, 700, 1351, 20));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        frame_4->setFrameShape(QFrame::Shape::HLine);
        frame_4->setFrameShadow(QFrame::Shadow::Plain);
        frame_4->setLineWidth(20);
        label_2 = new QLabel(menu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 170, 361, 101));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/ppy.PNG);"));
        frame = new QFrame(menu);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(340, 290, 601, 381));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 0, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        viewFriendsList = new QPushButton(frame);
        viewFriendsList->setObjectName("viewFriendsList");
        viewFriendsList->setGeometry(QRect(0, 0, 151, 131));
        viewFriendsList->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
""));
        memories = new QPushButton(frame);
        memories->setObjectName("memories");
        memories->setGeometry(QRect(0, 140, 151, 131));
        memories->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
""));
        createPost = new QPushButton(frame);
        createPost->setObjectName("createPost");
        createPost->setGeometry(QRect(0, 290, 291, 90));
        createPost->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
""));
        switchUser = new QPushButton(frame);
        switchUser->setObjectName("switchUser");
        switchUser->setGeometry(QRect(449, 0, 151, 131));
        switchUser->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
""));
        viewLikedPages = new QPushButton(frame);
        viewLikedPages->setObjectName("viewLikedPages");
        viewLikedPages->setGeometry(QRect(449, 140, 151, 131));
        viewLikedPages->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
""));
        viewTimeline = new QPushButton(frame);
        viewTimeline->setObjectName("viewTimeline");
        viewTimeline->setGeometry(QRect(309, 290, 291, 90));
        viewTimeline->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
""));
        viewHome = new QPushButton(frame);
        viewHome->setObjectName("viewHome");
        viewHome->setGeometry(QRect(180, 0, 241, 271));
        viewHome->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Unispace\";\n"
"background-color: rgb(85, 0, 255);\n"
""));
        frame->raise();
        greet->raise();
        label->raise();
        frame_3->raise();
        frame_4->raise();
        label_2->raise();

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Dialog", nullptr));
        greet->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        viewFriendsList->setText(QCoreApplication::translate("menu", "Friends\n"
"List", nullptr));
        memories->setText(QCoreApplication::translate("menu", "Memories", nullptr));
        createPost->setText(QCoreApplication::translate("menu", "Create Post", nullptr));
        switchUser->setText(QCoreApplication::translate("menu", "Switch\n"
"User", nullptr));
        viewLikedPages->setText(QCoreApplication::translate("menu", "Liked\n"
"Pages", nullptr));
        viewTimeline->setText(QCoreApplication::translate("menu", "Timeline", nullptr));
        viewHome->setText(QCoreApplication::translate("menu", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
