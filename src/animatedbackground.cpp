#include "include/animatedbackground.h"
#include <QLinearGradient>
#include <QtMath>
AnimatedBackground::AnimatedBackground(SocialMediaApp *app,QWidget *parent)
    : QWidget(parent), app(app)
{
    setAttribute(Qt::WA_TransparentForMouseEvents);
    setAttribute(Qt::WA_OpaquePaintEvent);
    setAutoFillBackground(false);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&AnimatedBackground::update));

    // Decrease the timer interval to make the animation faster
    timer->start(30);  // Faster interval (e.g., 30 ms)
}

void AnimatedBackground::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect rect = this->rect();

    QColor base(26, 25, 40);

    double t = 0.5 * (1 + std::sin(angle));

    double huePink = 300.0 / 360.0;
    double huePurple = 270.0 / 360.0;

    double interpolatedHue1 = huePink * t + huePurple * (1 - t);
    double interpolatedHue2 = huePurple * t + huePink * (1 - t);

    QColor color1 = QColor::fromHsvF(interpolatedHue1, 1.0, 0.9);
    QColor color2 = QColor::fromHsvF(interpolatedHue2, 1.0, 0.9);

    QLinearGradient gradient(rect.topLeft(), rect.bottomRight());
    gradient.setColorAt(0.0, base);
    gradient.setColorAt(0.5, color1);
    gradient.setColorAt(1.0, color2);

    painter.fillRect(rect, gradient);

    // Increase the angle increment to speed up the transition
    angle += 0.1;  // Faster angle increment
    if (angle > 2 * M_PI) angle = 0;
}
