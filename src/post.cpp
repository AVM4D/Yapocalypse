#include "include/post.h"
#include "ui_post.h"
#include "include/project.h"
#include <iostream>
#include "QListWidgetItem"
#include "QMessageBox"

post::post(SocialMediaApp *app,QWidget *parent) : QDialog(parent),ui(new Ui::post), app(app)
{
    ui->setupUi(this);
}

post::post(SocialMediaApp *app,QWidget *parent, int rowIndex,Post**post,string*name) :QDialog(parent),ui(new Ui::post),rowInd(rowIndex),p(post),name(name), app(app)
{
 ui->setupUi(this);
 setWindowTitle("Post");
 string date =  p[rowInd]->getDate();
 QString qst = QString::fromStdString(date);
 ui->date->setText(qst);


 string s = name[rowInd] +" "+ p[rowInd]->getActivity();
 QString qString = QString::fromStdString(s);
 ui->textEdit->setText(qString);

 ui->textEdit->setReadOnly(true);
 ui->textEdit->setWordWrapMode(QTextOption::WordWrap);

 s = p[rowInd]->viewPost(name[rowInd]);
 qString = QString::fromStdString(s);
 ui->textEdit_2->setText(qString);
 ui->textEdit_2->setReadOnly(true);
 ui->textEdit_2->setWordWrapMode(QTextOption::WordWrap);




 int noCom = p[rowInd]->getNumComments();

  for ( int j = 0 ;j< noCom ;j++)
  {
  string s = p[rowInd]->viewPostComments(j);
  std::cout << s << endl;
  QString q = QString::fromStdString(s);
  QListWidgetItem *item = new QListWidgetItem(q);
  QFont font("Unispace", 12);
  item->setFont(font);
  item->setForeground(QBrush(Qt::white));
  item->setBackground(QBrush(QColor("#5500FF")));
  ui->listWidget->addItem(item);
  }
  string com = "Comments: "+ to_string(noCom);
  QString qStr = QString::fromStdString(com);
  ui->noOfCom->setText(qStr);


    int nolikes = p[rowInd]->getNumLikes();
    cout << nolikes <<endl;
  for ( int i = 0 ;i< nolikes ;i++)
  {
   string s  = p[rowInd]->viewPostLikers(i);
   QString q = QString::fromStdString(s);
   QListWidgetItem *item = new QListWidgetItem(q);
   QFont font("Unispace", 12);
   item->setFont(font);
   item->setForeground(QBrush(Qt::white));
   item->setBackground(QBrush(QColor("#5500FF")));
   ui->listWidget_2->addItem(item);
   }
  }


post::~post()
{
    delete ui;
}

void post::on_exit_clicked()
{
    close();
}


void post::on_postComment_clicked()
{


    int noCom = p[rowInd]->getNumComments();
    if ( noCom >= 10){
         QMessageBox::warning(this,"Comment", "Post has reached its limit of comments!");
    }else{
    QString text =ui->textEdit_3->toPlainText();
    string s = text.toStdString();
    string id = app->getCurrentUserId();
    string name = app->getCurrentUserName();
    cout << "t1"<< s << endl;
    p[rowInd]->addComment(id , name , s ,noCom);
    noCom++;
    p[rowInd]->setNumComments(noCom);
    ui->textEdit_3->clear();
    ui->textEdit_3->setFocus();

    }

}


void post::on_like_clicked()
{
    string name = app->getCurrentUserName();
    int likes = p[rowInd]->getNumLikes();
    if ( likes >= 10)
    {
      QMessageBox::warning(this,"Likes", "Post has reached its limit of likes!");
    }else if ( p[rowInd]->checkLiker(name)){

        QMessageBox::warning(this,"Likes", "You've already liked this post bruh!");
    } else{
   string name = app->getCurrentUserName();

   p[rowInd]->addLiker(name,likes);
   likes++;
   p[rowInd]->setNumLikes(likes);
    }

}

