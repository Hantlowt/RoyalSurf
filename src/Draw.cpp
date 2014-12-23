#include "Draw.h"

void vBitmapOutput(GLfloat x, GLfloat y, char *string, void *font, GLfloat a, GLfloat b, GLfloat c)
{
glColor3d(a,b,c);
	int len,i;
	glRasterPos2f(x,y);
	len = (int) strlen(string);
	for (i = 0; i < len; i++) glutBitmapCharacter(font,string[i]);
}
