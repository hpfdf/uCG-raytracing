#ifndef UCG_KDTREE_H
#define UCG_KDTREE_H

#include "../clcommon.h"
#include "basic.h"

//!CL_BEGIN 201

#define MAX_DEPTH 16  // limit the depth of kd-tree
#define MESH_LEAF 20  // stop split when node is small
typedef struct
{
        size_t l, r;
        int depth, axis_type; // 0x 1y 2z
        ureal separate;
        Box3D box;
} TreeNode;
//!CL_END
#endif
