#include <stdio.h>
#include <stdlib.h>
#include "vec3.h"
#include "canvas.h"

void init_canvas(struct canvas **cptr, int w, int h)
{
	int i, j;
	*cptr = malloc(sizeof (struct canvas));
	(*cptr)->w = w;
	(*cptr)->h = h;

	(*cptr)->color = malloc(sizeof (struct vec3) * w * h);
	for (i = 0; i < w; i++)
	{
		for (j = 0; j < h; j++)
		{
			(*cptr)->color[j*w+i].x = 0.0;
			(*cptr)->color[j*w+i].y = 0.0;
			(*cptr)->color[j*w+i].z = 0.0;
		}
	}
}

void free_canvas(struct canvas **cptr)
{
	free((*cptr)->color);
	free(*cptr);
}

void write_pixel(struct canvas *c, int x, int y, struct vec3 *col)
{
	c->color[y*c->w+x].x = col->x;
	c->color[y*c->w+x].y = col->y;
	c->color[y*c->w+x].z = col->z;
}

struct vec3 *pixel_at(struct canvas *c, int x, int y)
{
	return &(c->color[y*c->w+x]);
}

void write2disk(struct canvas *c)
{
	int i, j;
	struct vec3 *pixel;

	FILE *fp = fopen("out.ppm", "w");
	fputs("P3\n", fp);
	fprintf(fp, "%d %d\n", c->w, c->h);
	fputs("255\n", fp);

	for (j = 0; j < c->h; j++)
	{
		for (i = 0; i < c->w; i++)
		{
			pixel = pixel_at(c, i, j);
			fprintf(fp, "%d %d %d\n", (int) (pixel->x * 255), (int) (pixel->y * 255), (int) (pixel->z * 255));
		}
	}

	fclose(fp);
}