#include "Draw.h"


void vBitmapOutput(GLfloat x, GLfloat y, char *string, void *font, GLfloat a, GLfloat b, GLfloat c)
{

glColor3d(a,b,c);
	char *p;

	glPushMatrix();	// glPushMatrix et glPopMatrix sont utilisées pour sauvegarder
			// et restaurer les systèmes de coordonnées non translatés
	glTranslatef(x, y, 0); // Positionne le premier caractère de la chaîne
	for (p = string; *p; p++) glutStrokeCharacter(font, *p); // Affiche chaque caractère de la chaîne
	glPopMatrix();

}

void ChangeBackgroundColor(GLfloat r, GLfloat v, GLfloat b, GLfloat transparency)
{

glClearColor(r, v, b, transparency);

}

