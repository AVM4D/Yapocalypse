#include "include/pagetimeline.h"
#include "ui_pagetimeline.h"
#include "include/post.h"
#include "include/animatedbackground.h"
#include "include/project.h"
pagetimeline::pagetimeline(SocialMediaApp *app,QWidget *parent, string name  , int n  ,Post** pos ) :
    QDialog(parent), name(name), n(n),p(pos),
    ui(new Ui::pagetimeline),app(app)
{
    ui->setupUi(this);
    AnimatedBackground *bg = new AnimatedBackground(app,ui->listWidget);
    bg->setGeometry(ui->listWidget->rect());
    bg->lower();
    setWindowTitle("Page Timeline");
    QString qstr = QString::fromStdString(name);
    ui->label->setText(qstr);

    for ( int i = 0 ;i< n ;i++)
    {
        string s = name +" "+ p[i]->getActivity();
        QString q = QString::fromStdString(s);
        QListWidgetItem *item = new QListWidgetItem(q);
        QFont font("Unispace", 12);
        item->setFont(font);
        item->setForeground(QBrush(Qt::white));
        item->setBackground(QBrush(QColor("#5500FF")));

        ui->listWidget->addItem(item);
      }
      connect(ui->listWidget, &QListWidget::itemPressed, this, &pagetimeline::onItemPressed);
}

pagetimeline::~pagetimeline()
{
    delete ui;
}
void pagetimeline::onItemPressed(QListWidgetItem *item) {

    int rowIndex = ui->listWidget->row(item);
    string *naMe = new string [n];
    for ( int i = 0 ;i< n ;i++)
    {
        naMe[i] = name;
    }
    post * posT = new post (app,this, rowIndex, p, naMe);
    posT->show();

}


void pagetimeline::on_back_clicked()
{
    close();
}

