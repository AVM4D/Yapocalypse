#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "project.h"

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(SocialMediaApp *app,QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_switchUser_clicked();

    void on_viewFriendsList_clicked();

    void on_viewLikedPages_clicked();

    void on_viewHome_clicked();

    void on_viewTimeline_clicked();

    void on_createPost_clicked();

    void on_memories_clicked();

private:
    Ui::menu *ui;
    SocialMediaApp *app;
};

#endif // MENU_H
