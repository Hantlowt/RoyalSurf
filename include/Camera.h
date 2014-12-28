#ifndef CAMERA_H
#define CAMERA_H
#include <GL/glut.h>

class Camera
{
    public:
        Camera();
        ~Camera();
        void Draw();
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
