/********************************************************************************
** Form generated from reading UI file 'timeline.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMELINE_H
#define UI_TIMELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_timeline
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *back;
    QLabel *label_2;

    void setupUi(QDialog *timeline)
    {
        if (timeline->objectName().isEmpty())
            timeline->setObjectName("timeline");
        timeline->resize(800, 700);
        timeline->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 25, 40);"));
        listWidget = new QListWidget(timeline);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 160, 700, 481));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        label = new QLabel(timeline);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 100, 701, 51));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back = new QPushButton(timeline);
        back->setObjectName("back");
        back->setGeometry(QRect(340, 650, 120, 30));
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"border: 2px solid;\n"
"Border-radius: 10px;\n"
"font: 700 16pt \"Unispace\";"));
        label_2 = new QLabel(timeline);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 10, 311, 71));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/timelineeeee.png);"));

        retranslateUi(timeline);

        QMetaObject::connectSlotsByName(timeline);
    } // setupUi

    void retranslateUi(QDialog *timeline)
    {
        timeline->setWindowTitle(QCoreApplication::translate("timeline", "Dialog", nullptr));
        label->setText(QString());
        back->setText(QCoreApplication::translate("timeline", "Back", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class timeline: public Ui_timeline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMELINE_H
