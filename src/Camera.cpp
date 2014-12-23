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
