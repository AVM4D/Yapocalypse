#ifndef FRIENDLIST_H
#define FRIENDLIST_H
#include <QListWidgetItem>

#include <QDialog>
#include "project.h"
namespace Ui {
class FriendList;
}

class FriendList : public QDialog
{
    Q_OBJECT

public:
    explicit FriendList(SocialMediaApp *app,QWidget *parent = nullptr);
    ~FriendList();

private slots:
    void on_back_clicked();


private:
    Ui::FriendList *ui;
    SocialMediaApp *app;
};

#endif // FRIENDLIST_H
