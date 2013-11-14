#ifndef UCG_MESH_H
#define UCG_MESH_H

#include <basic.h>

struct Vertex
{
        Vector3D p, norm;
};

struct Mesh
{
        Vertex *a, *b, *c;
};

struct VertexSet
{

};

#endif
