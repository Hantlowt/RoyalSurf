#include <GL/glut.h>
#include <iostream>
#include "Base.h"
#define WIDTH 1024
#define HEIGHT 768


Base *base;

static float current_time = 0;
static float last_time = 0;
float delta_time = 1;

void Idle(void)
{

  last_time = current_time;
  current_time = glutGet(GLUT_ELAPSED_TIME);
  delta_time = current_time - last_time;
  base->Idle(delta_time);

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
void Draw(void)
{
glEnable(GL_CULL_FACE);
glMatrixMode(GL_MODELVIEW);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT) ;
glLoadIdentity();
base->Draw();
glFlush();
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
