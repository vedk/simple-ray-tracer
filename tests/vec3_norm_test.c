#include <math.h>
#include "../src/vec3.h"

#define EPSILON 1.0e-6

int main()
{
	struct vec3 a;

	a.x = 1;
	a.y = 1;
	a.z = 1;

	if (fabs(vec3_norm(&a) - 1.7320508) < EPSILON)
		return 0;
	else
		return 1;
}