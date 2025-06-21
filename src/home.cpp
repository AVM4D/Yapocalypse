#include "include/home.h"
#include "QListWidgetItem"
#include "ui_home.h"
#include <string>
#include "QVBoxLayout"
#include "QLabel"
#include <iostream>
#include <QDebug>
#include <include/project.h>
#include "include/post.h"
#include"include/animatedbackground.h"
#include "include/project.h"

home::home(SocialMediaApp *app,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::home), app(app)
{

    ui->setupUi(this);
    setWindowTitle("Home");
    string s = app->getCurrentUserName()+ " - Home Page" ;
    QString qstr = QString::fromStdString(s);
    ui->label->setText(qstr);

     int no = app->getUserNoOfHomePost();

    Post** post = app->viewHomeGetPost();
    string * name  = app->viewHomeName();

    for ( int i = 0 ;i< no ;i++){

        string s = name[i] +" "+ post[i]->getActivity();
        QString q = QString::fromStdString(s);
        QListWidgetItem *item = new QListWidgetItem(q);
        QFont font("Unispace", 12);
        item->setFont(font);
        item->setForeground(QBrush(Qt::white));
       item->setBackground(QBrush(QColor("#5500FF")));

        ui->listWidget->addItem(item);
       AnimatedBackground *bg = new AnimatedBackground(app,ui->listWidget);
       bg->setGeometry(ui->listWidget->rect());
       bg->lower();

      }
     connect(ui->listWidget, &QListWidget::itemPressed, this, &home::onItemPressed);
}

home::~home()
{
    delete ui;
}
void home::onItemPressed(QListWidgetItem *item) {

    int rowIndex = ui->listWidget->row(item);
    Post** posT = app->viewHomeGetPost();
    string * name  = app->viewHomeName();
    post * p = new post (app,this, rowIndex, posT,name);
    p->show();
    //close();
}



void home::on_back_clicked()
{
    close();
}

