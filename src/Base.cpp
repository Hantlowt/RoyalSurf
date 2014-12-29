#include "Base.h"
#include "Game.h"


Base::Base()
{
this->m_isOpen = true;
this->gamestat = GAME;

}

Base::~Base()
{

}

void Base::MouseFunc(int button, int state, int x, int y)
{
if(gamestat==GAME)
{
game->MouseFunc(button, state, x, y);
}
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
game->Init();
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
