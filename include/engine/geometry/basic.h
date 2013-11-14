#ifndef UCG_BASIC_H
#define UCG_BASIC_H

//!CL_BEGIN geometry 1

#define ureal double

struct Vector2D
{
	ureal x, y;
};

struct Vector3D
{
	ureal x, y, z;
};

struct Line3D
{
	Vector3D p, v;
};

struct Ray3D
{
	Vector3D p, v;
};

struct Segment2D
{
	Vector2D p, q;
};

struct Triangle3D
{
	Vector3D a, b, c;
};

struct Sphere3D
{
        Vector3D o;
        ureal r;
};

struct Plane3D
{
        Vector3D p, norm;
};

//!CL_END

#endif
