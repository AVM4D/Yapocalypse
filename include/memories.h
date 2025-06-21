#ifndef MEMORIES_H
#define MEMORIES_H

#include <QDialog>
#include "QListWidgetItem"
#include "project.h"

namespace Ui {
class memories;
}

class memories : public QDialog
{
    Q_OBJECT

public:
    explicit memories(SocialMediaApp *app, QWidget *parent = nullptr);
    ~memories();

private slots:
    void on_back_clicked();
    void onItemPressed(QListWidgetItem *item);

    void on_share_clicked();

private:
    Ui::memories *ui;
    SocialMediaApp *app;
};

#endif // MEMORIES_H
