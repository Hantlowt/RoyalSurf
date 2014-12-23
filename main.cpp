#include <GL/glut.h>
#include <iostream>
#include "Base.h"

int main(int argc, char** argv)
{

    //Initialisation d'OpenGL
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(100, 100);
glutInitWindowSize(1024,768);
glutCreateWindow(argv[0]);
glEnable(GL_DEPTH_TEST);
glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

//Initialisation de la Base.
    Base *base = new Base();
    base->Init();

    //Initialisation des variables pour Delta Time
static float current_time = 0;
  static float last_time = 0;
float delta_time = 1;
  //Lancement de la boucle principal :)
    while(base->isOpen())
    {

  last_time = current_time;
  current_time = glutGet(GLUT_ELAPSED_TIME);
  delta_time = current_time - last_time;
  base->Idle(delta_time);

  glEnable(GL_CULL_FACE);
     glMatrixMode(GL_MODELVIEW);
glClear(GL_COLOR_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT) ;
   glLoadIdentity();

base->Draw();
glFlush();

    }

    return 0;
}
