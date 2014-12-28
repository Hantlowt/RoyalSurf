#include <GL/glut.h>
#include <iostream>
#include "Base.h"
#define WIDTH 1024
#define HEIGHT 768

int oldTimeSinceStart = 0;
Base *base;

void Draw(void)
{
glEnable(GL_CULL_FACE);
glMatrixMode(GL_MODELVIEW);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT) ;
glLoadIdentity();
base->Draw();
glFlush();
}


void Idle(void)
{

  int timeSinceStart = glutGet(GLUT_ELAPSED_TIME);
     int delta_time = timeSinceStart - oldTimeSinceStart;
     oldTimeSinceStart = timeSinceStart;

  base->Idle(delta_time);

Draw();
}
void Reshape(int x, int y)
{
    if (y == 0 || x == 0) return;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40.0,(GLdouble)x/(GLdouble)y,0.5,50);
    glMatrixMode(GL_MODELVIEW);
    glViewport(0,0,x,y);
}

void MouseFunc(int button, int state, int x, int y)
{
base->MouseFunc(button, state, x, y);
}
int main(int argc, char** argv)
{
//Initialisation de la Base.
base = new Base();
base->Init();
    //Initialisation d'OpenGL
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(100, 100);
glutInitWindowSize(WIDTH, HEIGHT);
glutCreateWindow(argv[0]);
glEnable(GL_DEPTH_TEST);
glutReshapeFunc(Reshape);
glutDisplayFunc(Draw);
glutIdleFunc(Idle);
glutMouseFunc(MouseFunc);
glutMainLoop();
return 0;
}
