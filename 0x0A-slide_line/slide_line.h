#ifndef SLIDE
#define SLIDE

#include "stdio.h"

#define SLIDE_LEFT 1
#define SLIDE_RIGHT 0
int slide_line(int *line, size_t size, int direction);
void slider(int *line, size_t size, int direction);
void calculations(int *line, size_t size, int direction);

#endif

