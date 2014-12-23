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

vBitmapOutput(-1.0,0.5f,"Score : ",GLUT_BITMAP_HELVETICA_18, 1, 1, 1);

}

void Game::Idle(float delta_time)
{


}
