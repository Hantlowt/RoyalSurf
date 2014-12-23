#include "Game.h"

Game::Game()
{
this->m_score = 0;

}

Game::~Game()
{

}

void Game::Draw()
{
char *txt_score = new char;
sprintf(txt_score, "Score : %d", this->m_score);
vBitmapOutput(-1.0,0.5f,txt_score,GLUT_BITMAP_HELVETICA_18, 1, 1, 1);

}

void Game::Idle(float delta_time)
{


}
