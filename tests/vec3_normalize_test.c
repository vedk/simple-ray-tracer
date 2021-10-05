#include <math.h>
#include "../src/vec3.h"

#define EPSILON 1.0e-6

int main()
{
	struct vec3 a;

	a.x = 4;
	a.y = 0;
	a.z = 0;

	vec3_normalize(&a);
	if (fabs(a.x - 1.0) < EPSILON && fabs(a.y) < EPSILON && fabs(a.z) < EPSILON)
		return 0;
	else
		return 1;

	a.x = 1;
	a.y = 2;
	a.z = 3;

	vec3_normalize(&a);
	if (fabs(a.x - 0.26726) < EPSILON && fabs(a.y - 0.53452) < EPSILON && fabs(a.z - 0.80178) < EPSILON)
		return 0;
	else
		return 1;
}