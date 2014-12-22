#include "Base.h"

Base::Base()
{
    this->mouse.x = 0;
    this->mouse.y = 0;
    this->mouse.left = false;
    this->mouse.center = false;
    this->mouse.right = false;
}

Base::~Base()
{

}

void Base::Init(int argc, char** argv)
{

//Initialisation d'OpenGL
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(100, 100);
glutInitWindowSize(1024,768);
glutCreateWindow(argv[0]);
glEnable(GL_DEPTH_TEST);
glutDisplayFunc(this->Draw);
glutReshapeFunc(Reshape);
//glutMouseFunc (onMouseClick);
glutIdleFunc(Idle);
glutMainLoop();
}
