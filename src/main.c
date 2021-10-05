#include <stdio.h>
#include <stdlib.h>
#include "vec3.h"
#include "canvas.h"

#define R 256
#define C 256

int main()
{
	int i, j;
	struct canvas *c;
	struct vec3 p;
	init_canvas(&c, R, C);

	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			p.x = i/512.0;
			p.y = j/512.0;
			p.z = 0.0;
			write_pixel(c, i, j, &p);
		}
	}


	write2disk(c);

	free_canvas(&c);
	return 0;
}