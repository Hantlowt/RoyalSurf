#include "Base.h"
#include "Game.h"


Base::Base()
{
this->m_isOpen = true;
    this->mouse.x = 0;
    this->mouse.y = 0;
    this->mouse.left = false;
    this->mouse.center = false;
    this->mouse.right = false;
    this->gamestat = GAME;

}

Base::~Base()
{

}



bool Base::isOpen()
{

return m_isOpen;
}
void Base::Init()
{

if(this->gamestat==GAME)
{
game = new Game();
}

}

void Base::Idle(float delta_time)
{

if(gamestat==GAME)
{
game->Idle(delta_time);
}

}

void Base::Draw()
{

if(gamestat==GAME)
{
game->Draw();
}

}
