#ifndef SHAREMEMORY_H
#define SHAREMEMORY_H

#include <QDialog>
#include "project.h"


namespace Ui {
class shareMemory;
}

class shareMemory : public QDialog
{
    Q_OBJECT

public:
    explicit shareMemory(SocialMediaApp *app,QWidget *parent = nullptr,Post* p = nullptr);
    ~shareMemory();

private slots:
    void on_share_clicked();

private:
    Ui::shareMemory *ui;
    Post* post ;
    SocialMediaApp *app;
};

#endif // SHAREMEMORY_H
