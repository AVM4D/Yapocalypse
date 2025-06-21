#include "include/friendlist.h"
#include "ui_friendlist.h"
#include "QListWidgetItem"
#include <string>
#include <iostream>
#include "include/project.h"
#include "include/animatedbackground.h"
using namespace std;

FriendList::FriendList(SocialMediaApp *app, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FriendList)
    ,app(app)
{
    ui->setupUi(this);
    setWindowTitle("Friend List");
      int no = app->getUserNoOfFriend();
      if (no <= 0 ){
          no = 1 ;
      }
      for ( int i = 0 ;i< no ;i++){
       string s =   app->viewFriendList(i);
       QString q = QString::fromStdString(s);

    QListWidgetItem *item = new QListWidgetItem(q);
       QFont font("Unispace", 12);
     item->setFont(font);
       item->setForeground(QBrush(Qt::white));
     item->setBackground(QBrush(QColor("#5500FF")));
    ui->listWidget->addItem(item);
     AnimatedBackground *bg = new AnimatedBackground(app, ui->listWidget);
     bg->setGeometry(ui->listWidget->rect());
     bg->lower();
      }




}

FriendList::~FriendList()
{
    delete ui;
}

void FriendList::on_back_clicked()
{
close();
}


