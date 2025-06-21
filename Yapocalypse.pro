QT       += core gui

TEMPLATE = app
TARGET = SocialMediaApp

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# If you’re using deprecated APIs, uncomment the following line:
//DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

# Sources (with a relative path to the src folder),
SOURCES += \
    src/animatedbackground.cpp \
    src/createpost.cpp \
    src/friendlist.cpp \
    src/home.cpp \
    src/likedpages.cpp \
    src/login.cpp \
    src/main.cpp \
    src/memories.cpp \
    src/menu.cpp \
    src/pagetimeline.cpp \
    src/post.cpp \
    src/project.cpp \
    src/shareMemory.cpp \
    src/timeline.cpp

# Headers (with relative path to the include folder),
HEADERS += \
    include/animatedbackground.h \
    include/createpost.h \
    include/friendlist.h \
    include/home.h \
    include/likedpages.h \
    include/login.h \
    include/memories.h \
    include/menu.h \
    include/pagetimeline.h \
    include/post.h \
    include/project.h \
    include/shareMemory.h \
    include/timeline.h

# UI files (with relative path to the forms folder),
FORMS += \
    forms/createpost.ui \
    forms/friendlist.ui \
    forms/home.ui \
    forms/likedpages.ui \
    forms/login.ui \
    forms/memories.ui \
    forms/menu.ui \
    forms/pagetimeline.ui \
    forms/post.ui \
    forms/project.ui     \
    forms/sharememory.ui \
    forms/timeline.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Distribution files (if they reside in a folder, update the path accordingly)
DISTFILES += \
    resources/Friends.txt \
    resources/LikedPages.txt \
    resources/Pages.txt \
    resources/PagesPosts.txt \
    resources/Users.txt \
    resources/UsersPosts.txt

# Resources (this is your .qrc file path, adjust if needed).
RESOURCES += \
    res.qrc
