# Project: Ray Tracing
# Author:  Pufan He <hpfdf@126.com>
# Date:    since 2013/11/13

# Qt 5.1.0

TEMPLATE    = app
DESTDIR     = ../../bin
TARGET      = demo
QT          += gui widgets

OBJECTS_DIR = ../../tmp

SOURCES += \
    main.cpp

HEADERS +=

unix|win32: LIBS += -L$$OUT_PWD/../../bin/ -lcgutils -L$$OUT_PWD/../../bin/ -lcgengine
INCLUDEPATH += $$PWD/../../include
DEPENDPATH += $$PWD/../../bin
