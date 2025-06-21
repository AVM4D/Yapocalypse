#include "include/shareMemory.h"
#include "ui_sharememory.h"
#include "include/project.h"

shareMemory::shareMemory(SocialMediaApp *app,QWidget *parent,Post* p) :
    QDialog(parent),post(p),
    ui(new Ui::shareMemory), app(app)
{
    ui->setupUi(this);
    setWindowTitle("Share Memory");
}

shareMemory::~shareMemory()
{
    delete ui;
}

void shareMemory::on_share_clicked()
{
    QString selectedDescription = ui->textEdit->toPlainText();
    string type = "shared";
    string activity = "a memory";
    string description = selectedDescription.toStdString();
    app->shareMemory(type,activity,description,post);
    close();
}

