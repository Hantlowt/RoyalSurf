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
        bool isOpen();
    private:
    bool m_isOpen;
    struct Mouse
    {
    int x;
    int y;
    bool left;
    bool center;
    bool right;
    };
    typedef struct Mouse Mouse;
    Mouse mouse;
    enum GameStat
    {
    MENU, GAME
    };
    typedef enum GameStat GameStat;
    GameStat gamestat;
    Game *game;


};

#endif // BASE_H
