#include <math.h>
#include "../src/vec3.h"

#define EPSILON 1.0e-6

int main()
{
	struct vec3 a, b;

	a.x = 1;
	a.y = 2;
	a.z = 3;

	b.x = 10;
	b.y = 20;
	b.z = 30;

	vec3_add(&a, &b);
	if (fabs(a.x - 11.0) < EPSILON && fabs(a.y - 22.0) < EPSILON && fabs(a.z - 33) < EPSILON)
		return 0;
	else
		return 1;
}