#include <math.h>
#include "../src/vec3.h"

#define EPSILON 1.0e-6

int main()
{
	struct vec3 a, b;

	a.x = 1;
	a.y = 2;
	a.z = 3;

	b.x = 2;
	b.y = 3;
	b.z = 4;

	vec3_cross(&a, &b);
	if (fabs(a.x + 1.0) < EPSILON && fabs(a.y - 2.0) < EPSILON && fabs(a.z + 1.0) < EPSILON)
		return 0;
	else
		return 1;

	a.x = 1;
	a.y = 2;
	a.z = 3;

	vec3_cross(&b, &a);
	if (fabs(b.x - 1.0) < EPSILON && fabs(b.y + 2.0) < EPSILON && fabs(b.z - 1.0) < EPSILON)
		return 0;
	else
		return 1;
}