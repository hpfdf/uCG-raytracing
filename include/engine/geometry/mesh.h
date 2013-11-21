#ifndef UCG_MESH_H
#define UCG_MESH_H

#include "basic.h"
#include "../color/color.h"

typedef struct
{
        Vector3D p, norm;
} Vertex;

typedef struct
{
        size_t a, b, c;
        size_t mat;
        Vector2D ta, tb, tc;
} Mesh;

#endif
