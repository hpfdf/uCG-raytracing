# Project: Ray Tracing
# Author:  Pufan He <hpfdf@126.com>
# Date:    since 2013/11/13

# Qt 5.1.0

TEMPLATE    = lib
DESTDIR     = ../../bin
TARGET      = cgengine
OBJECTS_DIR = ../../tmp

SOURCES += \
    geometry/mesh.cpp \
    geometry/basic.cpp \
    object/triangle.cpp \
    object/sphere.cpp \
    object/simplify.cpp \
    object/object.cpp \
    render/tracing.cpp \
    render/render.cpp \
    render/raster.cpp \
    tree/kdtree.cpp


HEADERS += \
    geometry/mesh.h \
    geometry/basic.h \
    object/triangle.h \
    object/sphere.h \
    object/simplify.h \
    object/object.h \
    render/tracing.h \
    render/render.h \
    render/raster.h \
    tree/kdtree.h
