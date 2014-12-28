#ifndef BASE_H
#define BASE_H
#include <stdio.h>
#include "Game.h"


class Base
{
    public:
        Base();
        ~Base();
        void Init();
        void Idle(float delta_time);
        void Draw();
        void Reshape();
        void MouseFunc(int button, int state, int x, int y);
        bool isOpen();
    private:
    bool m_isOpen;
    enum GameStat
    {
    MENU, GAME
    };
    typedef enum GameStat GameStat;
    GameStat gamestat;
    Game *game;


};

#endif // BASE_H
