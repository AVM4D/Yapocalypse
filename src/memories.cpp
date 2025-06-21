#include "include/memories.h"
#include "ui_memories.h"
#include <string>
#include "include/project.h"
#include "QVBoxLayout"
#include "QLabel"
#include <iostream>
#include <QDebug>
#include <include/project.h>
#include "include/post.h"
#include "QMessageBox"
#include "include/shareMemory.h"
#include "include/animatedbackground.h"

memories::memories(SocialMediaApp *app, QWidget* parent) :
    QDialog(parent),
    ui(new Ui::memories), app(app)
{
    ui->setupUi(this);
    setWindowTitle("Memories");
    AnimatedBackground *bg = new AnimatedBackground(app,ui->listWidget);
    bg->setGeometry(ui->listWidget->rect());
    bg->lower();
    string  name = app->getCurrentUserName();

    int no = 0;

    Post** post =app->viewMemoryGetPost(no);


    for (int i = 0; i < no; i++) {

        string s = name + " " + post[i]->getActivity() + ", On this day(1 Year Ago) ";

        QString q = QString::fromStdString(s);
        QListWidgetItem* item = new QListWidgetItem(q);
        QFont font("Unispace", 12);
        item->setFont(font);
        item->setForeground(QBrush(Qt::white));
        item->setBackground(QBrush(QColor("#5500FF")));

        ui->listWidget->addItem(item);

    }
    connect(ui->listWidget, &QListWidget::itemPressed, this, &memories::onItemPressed);
}

memories::~memories()
{
    delete ui;
}
void memories::onItemPressed(QListWidgetItem* item) {

    int rowIndex = ui->listWidget->row(item);
    int no = 0;
    Post** posT =app->viewMemoryGetPost(no);
    string* name = new string[no];
    for (int i = 0; i < no; i++)
    {
        name[i] = app->getCurrentUserName();
    }
    post* p = new post(app,this, rowIndex, posT, name);
    p->show();
    //close();
}

void memories::on_back_clicked()
{
    close();
}


void memories::on_share_clicked()
{
    int no = 0;
    Post** posT = app->viewMemoryGetPost(no);
    int rowIndex = 0;
    QListWidgetItem* currentItem = ui->listWidget->currentItem();
    if (currentItem) {
        rowIndex = ui->listWidget->row(currentItem);
        //close();
        shareMemory* memoryShare = new shareMemory(app,this, posT[rowIndex]);
        memoryShare->show();

    }
    else {
        QMessageBox::warning(this, "Memories", "No item selected!");
    }

}

