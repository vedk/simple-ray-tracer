#include <math.h>
#include <stdlib.h>
#include "../src/vec3.h"
#include "../src/canvas.h"

#define EPSILON 1.0e-6

#define R 10
#define C 20

int main()
{
	int i, j;
	struct vec3 *p;
	struct canvas *c = NULL;
	init_canvas(&c, R, C);

	if (c == NULL || c->w != R || c->h != C)
		return 1;

	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			p = pixel_at(c, i, j);
			if (fabs(p->x) > EPSILON || fabs(p->y) > EPSILON || fabs(p->z) > EPSILON)
				return 1;
		}
	}

	free_canvas(&c);
	return 0;
}