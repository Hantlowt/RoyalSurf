#ifndef DRAW_H
#define DRAW_H
#include <GL/glut.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

void vBitmapOutput(GLfloat x, GLfloat y, char* string, void* font, GLfloat a, GLfloat b, GLfloat c);
void ChangeBackgroundColor(GLfloat r, GLfloat v, GLfloat b, GLfloat transparency);
void draw_quad(int x, int y, GLint texture);
#endif // DRAW_H
