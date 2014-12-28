#include "Camera.h"

Camera::Camera()
{
    this->m_camera_position.x = 0;
    this->m_camera_position.y = 0;
}

Camera::~Camera()
{
    //dtor
}

void Camera::Draw()
{
gluLookAt(m_camera_position.x, -40, m_camera_position.y, m_camera_position.x, 0.0, m_camera_position.y, 0.0, 0.0, 1.0);
}

void Camera::Move(int x, int y, GLfloat speed_x, GLfloat speed_y, float delta_time)
{

int camerax = this->m_camera_position.x;
int cameray = this->m_camera_position.y;

if(camerax != x || cameray != y)
{

if(this->m_camera_position.x < x)
{
this->m_camera_position.x += speed_x/1000 * delta_time;
}
else
{
this->m_camera_position.x -= speed_x/1000 * delta_time;
}

if(this->m_camera_position.y < y)
{
this->m_camera_position.y += speed_y/1000 * delta_time;
}
else
{
this->m_camera_position.y -= speed_y/1000 * delta_time;
}

}

}

GLfloat Camera::get_camera_position_x()
{
return this->m_camera_position.x;
}

GLfloat Camera::get_camera_position_y()
{
return this->m_camera_position.y;
}
