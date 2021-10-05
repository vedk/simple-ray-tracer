#ifndef VEC3_H
#define VEC3_H

struct vec3
{
	double x, y, z;
};

double vec3_norm(struct vec3 *a);

void vec3_add(struct vec3 *a, struct vec3 *b);
void vec3_sub(struct vec3 *a, struct vec3 *b);
void vec3_dot(struct vec3 *a, struct vec3 *b);
void vec3_cross(struct vec3 *a, struct vec3 *b);
void vec3_neg(struct vec3 *a);

void vec3_mul(struct vec3 *a, double k);
void vec3_div(struct vec3 *a, double k);

void vec3_normalize(struct vec3 *a);

#endif /*VEC3_H*/