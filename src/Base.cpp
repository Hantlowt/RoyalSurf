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
    gamestat = GAME;
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



}

void Base::Idle(double delta_time)
{


}

void Base::Draw()
{


}
