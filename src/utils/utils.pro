# Project: Ray Tracing
# Author:  Pufan He <hpfdf@126.com>
# Date:    since 2013/11/13

# Qt 5.1.0

TEMPLATE    = lib
DESTDIR     = ../../bin
TARGET      = cgutils
OBJECTS_DIR = ../../tmp

SOURCES += \
    thread.cpp \
    scene.cpp \
    obj.cpp \
    gpu.cpp

HEADERS += \
    thread.h \
    scene.h \
    obj.h \
    gpu.h
