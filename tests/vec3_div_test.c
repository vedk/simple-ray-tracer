#include <math.h>
#include "../src/vec3.h"

#define EPSILON 1.0e-6

int main()
{
	struct vec3 a;

	a.x = 1;
	a.y = -2;
	a.z = 3;

	vec3_div(&a, 2);
	if (fabs(a.x - 0.5) < EPSILON && fabs(a.y + 1) < EPSILON && fabs(a.z - 1.5) < EPSILON)
		return 0;
	else
		return 1;
}