#ifndef UCG_BASIC_H
#define UCG_BASIC_H

//!CL_BEGIN 101

#include <stdbool.h>

#define UREAL_DOUBLE    // 64 bit float value for whole engine

#ifdef UREAL_DOUBLE
#       define ureal double
#else
#       define UREAL_FLOAT
#       define ureal float
#endif

ureal equal(ureal a, ureal b);

ureal min(ureal a, ureal b);
ureal max(ureal a, ureal b);

typedef struct
{
	ureal x, y;
} Vector2D;

void inc_2D(Vector2D* p, const Vector2D q);
void dec_2D(Vector2D* p, const Vector2D q);

Vector2D plus_2D(const Vector2D u, const Vector2D v);
Vector2D minus_2D(const Vector2D u, const Vector2D v);

ureal dot_2D(const Vector2D u, const Vector2D v);
ureal cross_2D(const Vector2D u, const Vector2D v);

Vector2D normalized_2D(const Vector2D u);
void normalize_2D(Vector2D* p);

bool zero_2D(const Vector2D u);

ureal dist2_2D(const Vector2D u, const Vector2D v);
ureal dist_2D(const Vector2D u, const Vector2D v);

ureal length2_2D(const Vector2D u);
ureal length_2D(const Vector2D v);

typedef struct
{
	ureal x, y, z;
} Vector3D;

void inc(Vector3D* p, const Vector3D q);
void dec(Vector3D* p, const Vector3D q);

Vector3D plus(const Vector3D u, const Vector3D v);
Vector3D minus(const Vector3D u, const Vector3D v);

ureal dot(const Vector3D u, const Vector3D v);
Vector3D cross(const Vector3D u, const Vector3D v);

Vector3D normalized(const Vector3D u);
void normalize(Vector3D* p);

bool zero(const Vector3D u);

ureal dist2(const Vector3D u, const Vector3D v);
ureal dist(const Vector3D u, const Vector3D v);

ureal length2(const Vector3D u);
ureal length(const Vector3D u);

void scale_to(Vector3D* u, ureal len);
Vector3D scaled(const Vector3D u, ureal len);

bool is_parallel_vector(const Vector3D u, const Vector3D v);

typedef struct
{
	Vector3D p, v;
} Line3D;

bool pass_line_point(const Line3D l, const Vector3D p);
Line3D gen_line(const Vector3D p, const Vector3D q);

Line3D gen_line_x(const Vector3D p);
Line3D gen_line_y(const Vector3D p);
Line3D gen_line_z(const Vector3D p);

bool is_parallel_line(const Line3D l, const Line3D r);

typedef struct
{
	Vector3D p, v;
} Ray3D;


bool pass_ray_point(const Ray3D r, const Vector3D p);
Ray3D gen_ray(const Vector3D src, const Vector3D dst);

Ray3D gen_ray_x(const Vector3D p);
Ray3D gen_ray_y(const Vector3D p);
Ray3D gen_ray_z(const Vector3D p);
Ray3D gen_ray_nx(const Vector3D p);
Ray3D gen_ray_ny(const Vector3D p);
Ray3D gen_ray_nz(const Vector3D p);

Line3D ray2line(const Ray3D r);

bool is_parallel_ray(const Ray3D l, const Ray3D r);

typedef struct
{
	Vector2D p, q;
} Segment2D;


Segment2D gen_segment_2D(const Vector2D p, const Vector2D q);
bool cut_2D(const Segment2D a, const Segment2D b);
Vector2D intersect_2D(const Segment2D a, const Segment2D b);

typedef struct
{
	Vector3D p, q;
} Segment3D;

Segment3D gen_segment(const Vector3D p, const Vector3D q);
bool pass_segment_point(const Segment3D s, const Vector3D p);
Line3D gen_line_segment(const Segment3D s);

typedef struct
{
	Vector3D a, b, c;
} Triangle3D;

Triangle3D gen_triangle(const Vector3D p, const Vector3D q, const Vector3D r);
bool pass_ray_triangle(const Ray3D r, const Triangle3D t);
Vector3D intersect_ray_triangle(const Ray3D r, const Triangle3D t);

typedef struct
{
        Vector3D o;
        ureal r;
} Sphere3D;

typedef struct
{
        Vector3D p, norm;
} Plane3D;

Plane3D gen_plane_3p(const Vector3D p, const Vector3D q, const Vector3D r);
Plane3D gen_plane(const Vector3D p, const Vector3D norm);

bool pass_ray_plane(const Ray3D r, const Plane3D a);
bool is_parallel_ray_plane(const Ray3D r, const Plane3D a);
bool is_parallel_line_plane(const Line3D r, const Plane3D a);
bool is_parallel_vector_plane(const Vector3D r, const Plane3D a);

Vector3D intersect_ray_plane(const Ray3D r, const Plane3D a);

typedef struct
{
        Vector3D min, max;
} Box3D;

bool in_box(const Vector3D p, const Box3D b);
bool pass_ray_box(const Ray3D r, const Box3D b);
bool pass_segment_box(const Segment3D s, const Box3D b);

Box3D gen_box_point(const Vector3D p);
Box3D gen_box_segment(const Segment3D s);
Box3D gen_box_triangle(const Triangle3D t);
Box3D gen_box_sphere(const Sphere3D s);

void merge Box3D(Box3D* a, const Box3D b);
Box3D merged Box3D(const Box3D a, const Box3D b);

void merge_point Box3D(Box3D* a, const Vector3D p);
void merge_triangle Box3D(Box3D* a, const Triangle3D t);
void merge_sphere Box3D(Box3D* a, const Sphere3D s);

//!CL_END

#endif
