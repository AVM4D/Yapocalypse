#ifndef ANIMATEDBACKGROUND_H
#define ANIMATEDBACKGROUND_H

#include <QWidget>
#include <QTimer>
#include <QPainter>
#include "project.h"
class AnimatedBackground : public QWidget {
    Q_OBJECT
public:
    explicit AnimatedBackground(SocialMediaApp *app,QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    qreal angle = 0;
    QTimer *timer;
    SocialMediaApp *app;
};

#endif // ANIMATEDBACKGROUND_H
