#include "include/timeline.h"
#include "ui_timeline.h"
#include "include/project.h"
#include <iostream>
#include "include/post.h"
#include "include/animatedbackground.h"
timeline::timeline(SocialMediaApp *app,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::timeline), app(app)
{
    ui->setupUi(this);
    AnimatedBackground *bg = new AnimatedBackground(app,ui->listWidget);
    bg->setGeometry(ui->listWidget->rect());
    bg->lower();
     setWindowTitle("Timeline");
     string  name = app->getCurrentUserName();
     string s = name ;
     QString qstr = QString::fromStdString(s);
     ui->label->setText(qstr);
     ui->label->setStyleSheet("font-family: 'Unispace'; font-size: 20pt; background-color: rgb(255, 0, 255);");

     int no = app->getUserNoOfPost();

    Post** post = app->viewTimelineGetPost();


    for ( int i = 0 ;i< no ;i++){

        cout << post[i]->getActivity();
        string s = name +" "+ post[i]->getActivity();
        std::cout << "Post" << s << endl;
        QString q = QString::fromStdString(s);
        QListWidgetItem *item = new QListWidgetItem(q);
        QFont font("Unispace", 12);
        item->setFont(font);
        item->setForeground(QBrush(Qt::white));
        item->setBackground(QBrush(QColor("#5500FF")));

        ui->listWidget->addItem(item);


      }
     connect(ui->listWidget, &QListWidget::itemPressed, this, &timeline::onItemPressed);


}

timeline::~timeline()
{
    delete ui;
}

void timeline::onItemPressed(QListWidgetItem *item) {

    int rowIndex = ui->listWidget->row(item);
    Post** posT = app->viewTimelineGetPost();
    int no =app->getUserNoOfPost();
    string *name = new string [no];
    for ( int i = 0 ;i< no ;i++){
        name[i] = app->getCurrentUserName();
    }
    post * p = new post (app,this, rowIndex, posT,name);
    p->show();

}

void timeline::on_back_clicked()
{
    close ();
}

