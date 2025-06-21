/********************************************************************************
** Form generated from reading UI file 'project.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_H
#define UI_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_project
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *loginButton;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *frame_2;
    QFrame *frame_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *project)
    {
        if (project->objectName().isEmpty())
            project->setObjectName("project");
        project->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(project->sizePolicy().hasHeightForWidth());
        project->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        project->setFont(font);
        project->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        centralwidget = new QWidget(project);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 50, 371, 141));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/aaanew.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 580, 141, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 17pt \"Unispace\";\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(535, 280, 211, 101));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Unispace")});
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setItalic(false);
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: transparent;\n"
"color:white;\n"
"font: 700 28pt \"Unispace\";\n"
"\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(510, 490, 461, 201));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/ahmadmursaaaaleeen.png);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(535, 280, 211, 101));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-20, 20, 1351, 16));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::Shape::HLine);
        frame_2->setFrameShadow(QFrame::Shadow::Plain);
        frame_2->setLineWidth(30);
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(-10, 670, 1351, 16));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        frame_4->setFrameShape(QFrame::Shape::HLine);
        frame_4->setFrameShadow(QFrame::Shadow::Plain);
        frame_4->setLineWidth(30);
        project->setCentralWidget(centralwidget);
        label_4->raise();
        label->raise();
        loginButton->raise();
        label_3->raise();
        label_2->raise();
        frame_2->raise();
        frame_4->raise();
        menubar = new QMenuBar(project);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        project->setMenuBar(menubar);
        statusbar = new QStatusBar(project);
        statusbar->setObjectName("statusbar");
        project->setStatusBar(statusbar);

        retranslateUi(project);

        QMetaObject::connectSlotsByName(project);
    } // setupUi

    void retranslateUi(QMainWindow *project)
    {
        project->setWindowTitle(QCoreApplication::translate("project", "project", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("project", "Created By", nullptr));
        loginButton->setText(QCoreApplication::translate("project", "Lock In", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class project: public Ui_project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_H
