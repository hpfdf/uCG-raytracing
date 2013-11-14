# Project: Ray Tracing
# Author:  Pufan He <hpfdf@126.com>
# Date:    since 2013/11/13

# Qt 5.1.0

TEMPLATE    = lib
CONFIG      += staticlib
DESTDIR     = ../../lib
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
    ../../include/engine/geometry/mesh.h \
    ../../include/engine/geometry/basic.h \
    ../../include/engine/object/triangle.h \
    ../../include/engine/object/sphere.h \
    ../../include/engine/object/simplify.h \
    ../../include/engine/object/object.h \
    ../../include/engine/render/tracing.h \
    ../../include/engine/render/render.h \
    ../../include/engine/render/raster.h \
    ../../include/engine/tree/kdtree.h
