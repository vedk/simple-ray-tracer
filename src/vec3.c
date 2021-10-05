#include <stdlib.h>
#include <math.h>
#include "vec3.h"

void vec3_add(struct vec3 *a, struct vec3 *b)
{
	a->x += b->x;
	a->y += b->y;
	a->z += b->z;
}

void vec3_sub(struct vec3 *a, struct vec3 *b)
{
	a->x -= b->x;
	a->y -= b->y;
	a->z -= b->z;
}

void vec3_dot(struct vec3 *a, struct vec3 *b)
{
	a->x *= b->x;
	a->y *= b->y;
	a->z *= b->z;
}

void vec3_cross(struct vec3 *a, struct vec3 *b)
{
	struct vec3 temp;

	temp.x = (a->y * b->z) - (a->z * b->y);
	temp.y = (a->z * b->x) - (a->x * b->z);
	temp.z = (a->x * b->y) - (a->y * b->x);

	a->x = temp.x;
	a->y = temp.y;
	a->z = temp.z;
}

void vec3_neg(struct vec3 *a)
{
	a->x = -a->x;
	a->y = -a->y;
	a->z = -a->z;
}

double vec3_norm(struct vec3 *a)
{
	return sqrt(a->x*a->x + a->y*a->y + a->z*a->z);
}

void vec3_mul(struct vec3 *a, double k)
{
	a->x *= k;
	a->y *= k;
	a->z *= k;
}

void vec3_div(struct vec3 *a, double k)
{
	a->x /= k;
	a->y /= k;
	a->z /= k;
}

void vec3_normalize(struct vec3 *a)
{
	vec3_div(a, vec3_norm(a));
}