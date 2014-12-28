#include "Game.h"

Game::Game()
{
this->m_score = 0;
this->m_background_color.R = 0;
this->m_background_color.G = 1;
this->m_background_color.B = 1;
this->m_background_color.T = 0;
camera = new Camera();

}

Game::~Game()
{

}

void Game::Draw()
{
ChangeBackgroundColor(m_background_color.R, m_background_color.G, m_background_color.B, m_background_color.T);
camera->Draw();
char *txt_score = new char;
sprintf(txt_score, "Score : %d", this->m_score);
vBitmapOutput(camera->get_camera_position_x(),camera->get_camera_position_y()+10,txt_score,GLUT_BITMAP_HELVETICA_18, 1, 1, 1);
draw_quad(0.0,0.0,0);

}

void Game::Idle(float delta_time)
{


}

void Game::MouseFunc(int button, int state, int x, int y)
{

}
