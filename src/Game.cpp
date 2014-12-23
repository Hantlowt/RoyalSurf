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
camera->Draw();
ChangeBackgroundColor(m_background_color.R, m_background_color.G, m_background_color.B, m_background_color.T);

char *txt_score = new char;
sprintf(txt_score, "Score : %d", this->m_score);
vBitmapOutput(1,1,txt_score,GLUT_STROKE_MONO_ROMAN, 1, 1, 1);


}

void Game::Idle(float delta_time)
{


}
