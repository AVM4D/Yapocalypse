#ifndef LOGIN_H
#define LOGIN_H


#include <QDialog>
#include "project.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(SocialMediaApp *app, QWidget *parent = nullptr);
    ~login();

private slots:
    void on_Continue_clicked();

    void on_label_linkActivated(const QString &link);

private:
    Ui::login *ui;
    SocialMediaApp *app;
};

#endif // LOGIN_H
