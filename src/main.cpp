#include "include/project.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    SocialMediaApp socialApp;
    project p(&socialApp);
    p.show();

    return app.exec();
}
