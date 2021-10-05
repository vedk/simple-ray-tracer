#ifndef CANVAS_H
#define CANVAS_H

#include "vec3.h"

struct canvas
{
	int w, h;
	struct vec3 *color;
};

void init_canvas(struct canvas **cptr, int w, int h);
void free_canvas(struct canvas **cptr);
void write_pixel(struct canvas *c, int x, int y, struct vec3 *col);
struct vec3 *pixel_at(struct canvas *c, int x, int y);

void write2disk(struct canvas *c);

#endif /*CANVAS_H*/