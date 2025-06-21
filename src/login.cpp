#include "include/login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <include/project.h>
#include "include/project.h"
#include "include/menu.h"
#include "include/animatedbackground.h"

login::login(SocialMediaApp *app,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login), app(app)
{
    ui->setupUi(this);

    ui->frame_3->setStyleSheet("background: transparent;" "border: 2px solid pink;");
    AnimatedBackground *bg = new AnimatedBackground(app,ui->frame_3);
    bg->setGeometry(ui->frame_3->rect());
    bg->lower();
    AnimatedBackground *bg1 = new AnimatedBackground(app,ui->frame_2);
    bg1->setGeometry(ui->frame_2->rect());
    bg1->lower();
    AnimatedBackground *bg2 = new AnimatedBackground(app,ui->frame);
    bg2->setGeometry(ui->frame->rect());
    bg2->lower();

}

login::~login()
{
    delete ui;
}



void login::on_Continue_clicked()
{

    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    string id = username.toStdString();

    if( password == "000"&&(app->getUserByID(id)!= nullptr)) {

       QDate date = ui->dateEdit->date();

      int day = date.day();
      int month = date.month();
      int year = date.year();

       app->setCurrentSystemDate(day , month , year);
       app->setCurrentUser(id);
       close();
        menu* m = new menu(app,this);
        m->show();


    }
    else {
        QMessageBox::warning(this, "Login", "That login looks kinda sus.");


    }



}


void login::on_label_linkActivated(const QString &link)
{

}

