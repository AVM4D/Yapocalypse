#ifndef CREATEPOST_H
#define CREATEPOST_H

#include <QDialog>
#include "project.h"

namespace Ui {
class createpost;
}

class createpost : public QDialog
{
    Q_OBJECT

public:
    explicit createpost(SocialMediaApp *app,QWidget *parent = nullptr);
    ~createpost();

private slots:
    void on_share_clicked();

private:
    Ui::createpost *ui;
    SocialMediaApp *app;
};

#endif // CREATEPOST_H
