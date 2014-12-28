#include "Draw.h"

void draw_quad(int x, int y, GLint texture)
{
glTranslatef(0,0.0,0.0);
glEnable(GL_TEXTURE_2D);
        glPushMatrix();
glBindTexture(GL_TEXTURE_2D, texture);
  glBegin(GL_QUADS);

      glTexCoord2d(1,0);
      glVertex3f(-1.0f+x, 1.0f, -1.0f+y);
      glTexCoord2d(0,0);
      glVertex3f( 1.0f+x, 1.0f, -1.0f+y);
      glTexCoord2d(0,1);
      glVertex3f( 1.0f+x, 1.0f,  1.0f+y);
      glTexCoord2d(1,1);
      glVertex3f(-1.0f+x, 1.0f,  1.0f+y);

   glEnd();

        glPopMatrix();

}

void vBitmapOutput(GLfloat x, GLfloat y, char *string, void *font, GLfloat a, GLfloat b, GLfloat c)
{

glColor3d(a,b,c);
	int len,i; // len donne la longueur de la chaîne de caractères

	glRasterPos3f(x,0,y); // Positionne le premier caractère de la chaîne
	len = (int) strlen(string); // Calcule la longueur de la chaîne
	for (i = 0; i < len; i++) glutBitmapCharacter(font,string[i]); // Affiche chaque caractère de la chaîne

}

void ChangeBackgroundColor(GLfloat r, GLfloat v, GLfloat b, GLfloat transparency)
{

glClearColor(r, v, b, transparency);

}

