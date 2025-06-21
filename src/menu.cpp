#include "include/project.h"
#include "include/menu.h"
#include "include/home.h"
#include "include/login.h"
#include "ui_menu.h"
#include "QPushButton"
#include "QHBoxLayout"
#include "include/friendlist.h"
#include "include/likedpages.h"
#include "include/timeline.h"
#include "include/createpost.h"
#include "include/memories.h"
#include "include/animatedbackground.h"
menu::menu(SocialMediaApp *app,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu), app(app)
{
    ui->setupUi(this);
    ui->frame->setStyleSheet("background: transparent;");
    AnimatedBackground *bg = new AnimatedBackground(app,ui->frame);
    bg->setGeometry(ui->frame->rect());
    bg->lower();
    AnimatedBackground *bg1 = new AnimatedBackground(app,ui->frame_3);
    bg1->setGeometry(ui->frame_3->rect());
    bg1->lower();
    AnimatedBackground *bg2 = new AnimatedBackground(app,ui->frame_4);
    bg2->setGeometry(ui->frame_4->rect());
    bg2->lower();
    setWindowTitle("Menu");

      string n = app->getCurrentUserName();
      n = "Konichiwassup! "+n+"";
      QString qstr = QString::fromStdString(n);
      ui->greet->setText(qstr);
      ui->greet->setAlignment(Qt::AlignCenter);
      ui->greet->setStyleSheet(
          "color: rgb(255, 255, 255);"
          "background-color: rgb(85, 0, 255);"
          "font-family: 'Unispace';"
          "font-size: 16pt;"
          );
      QString style1 = R"(
    QPushButton {
        background-color: #5500ff;         /* Normal background */
        color: white;
        border: 3px solid #ff00ff;
        padding: 5px;
       font-size: 24pt;
        font-family: 'Unispace';
    }
    QPushButton:hover {
        background-color: #ff00ff;         /* Pink on hover */
    }
    QPushButton:pressed {
        background-color: #D903FF;         /* Deeper pink on click */
    }
)";
      QString style2 = R"(
    QPushButton {
        background-color: #5500ff;         /* Normal background */
        color: white;
        border: 3px solid #ff00ff;
        padding: 5px;
       font-size: 12pt;
        font-family: 'Unispace';
    }
    QPushButton:hover {
        background-color: #ff00ff;         /* Pink on hover */
    }
    QPushButton:pressed {
        background-color: #D903FF;         /* Deeper pink on click */
    }
)";

      ui->viewHome->setStyleSheet(style1);
      ui->viewFriendsList->setStyleSheet(style2);
      ui->viewLikedPages->setStyleSheet(style2);
       ui->viewTimeline->setStyleSheet(style2);
  ui->switchUser->setStyleSheet(style2);
      ui->memories->setStyleSheet(style2);
  ui->createPost->setStyleSheet(style2);



}

menu::~menu()
{
    delete ui;
}



void menu::on_switchUser_clicked()
{
    close();
    login* l = new login (app,this);
    l->show();
}


void menu::on_viewFriendsList_clicked()
{
    FriendList* friends = new FriendList (app,this);
    friends->show();

}


void menu::on_viewLikedPages_clicked()
{
    likedpages * page = new likedpages(app,this);
    page->show();

}


void menu::on_viewHome_clicked()
{
   home * h = new home (app,this);
   h->show();

}


void menu::on_viewTimeline_clicked()
{
    timeline* time = new timeline (app, this );
    time->show();
}


void menu::on_createPost_clicked()
{
    createpost* cp = new createpost(app,this);
    cp->show();

}


void menu::on_memories_clicked()
{
  memories * memory = new memories (app, this );
  memory->show();
}

