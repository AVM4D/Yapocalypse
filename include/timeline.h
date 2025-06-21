#ifndef TIMELINE_H
#define TIMELINE_H

#include <QDialog>
#include "QListWidgetItem"
#include "project.h"

namespace Ui {
class timeline;
}

class timeline : public QDialog
{
    Q_OBJECT

public:
    explicit timeline(SocialMediaApp *app,QWidget *parent = nullptr);
    ~timeline();

private slots:
    void on_back_clicked();

private:
    Ui::timeline *ui;
    void onItemPressed(QListWidgetItem *item);
    SocialMediaApp *app;
};

#endif // TIMELINE_H
