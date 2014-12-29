#ifndef CAMERA_H
#define CAMERA_H
#include <GL/glut.h>
#include <iostream>

class Camera
{
    public:
        Camera();
        ~Camera();
        void Draw();
        void Move(int x, int y, GLfloat speed_x, GLfloat speed_y, float delta_time);
        void Teleport(int x, int y);
        GLfloat get_camera_position_x();
        GLfloat get_camera_position_y();
    private:
    struct Position
    {
    GLfloat x;
    GLfloat y;
    };
    typedef struct Position Position;
    Position m_camera_position;

};

#endif // CAMERA_H
