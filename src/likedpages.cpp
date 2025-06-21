#include "include/likedpages.h"
#include <iostream>
#include "ui_likedpages.h"
#include "QListWidgetItem"
#include "include/project.h"
#include "include/pagetimeline.h"
#include "include/animatedbackground.h"

likedpages::likedpages(SocialMediaApp *app, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::likedpages), app(app)
{
    ui->setupUi(this);
    setWindowTitle("Liked Pages");
     int no = app->getUserNoOfLkedPages();
    if (no <= 0 )
    {
        no = 1 ;
    }
      for ( int i = 0 ;i< no ;i++){
     string s =   app->viewLikedPages(i);
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

   connect(ui->listWidget, &QListWidget::itemPressed, this, &likedpages::onItemPressed);

}

likedpages::~likedpages()
{
    delete ui;
}
void likedpages::onItemPressed(QListWidgetItem *item) {

      int rowIndex = ui->listWidget->row(item);
      Post** posT = app->getCurrentUserPagesPost(rowIndex);
      int no = app->getCurrentUserNoOfPagesPost(rowIndex);
      string name = app->viewLikedPagesName(rowIndex);
      pagetimeline* page = new pagetimeline (app, this, name ,no ,posT );
      page->show();
}

void likedpages::on_ok_clicked()
{
    close ();
}

