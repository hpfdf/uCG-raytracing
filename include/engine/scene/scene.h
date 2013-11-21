#ifndef UCG_SCENE_H
#define UCG_SCENE_H

#include "camera.h"
#include "../geometry/mesh.h"
#include "../geometry/kdtree.h"
//!CL_BEGIN 401

typedef struct
{
        Camera camera;

        size_t root;
        size_t size;
#ifdef GPU
        void* unused;
        double align;
        unsigned char mem[MEM_SIZE];
#else
        void* mem;
        double align;
#endif
} Scene;
//!CL_END

Scene gen_scene();

size_t alloc_mem(Scene* s, size_t size);

size_t alloc_vertex(Scene* s, const Vertex v);
size_t alloc_mesh(Scene* s, const Mesh m);
size_t alloc_material(Scene* s, const Material m);
size_t alloc_treenode(Scene* s, const TreeNode m);
size_t alloc_sphere(Scene* s, const Sphere m);
size_t alloc_plane(Scene* s, const Plane m);

Vertex* get_vertex(Scene* s, size_t index);
Mesh* get_mesh(Scene* s, size_t index);
Material* get_material(Scene* s, size_t index);
TreeNode* get_treenode(Scene* s, size_t index);
Sphere* get_sphere(Scene* s, size_t index);
//TODO
size_t alloc_ptrlist(Scene* s, size_t* meshes, size_t len);


#endif
