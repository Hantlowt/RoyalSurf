#ifndef GAME_H
#define GAME_H
#include "Draw.h"

class Game
{
    public:
        Game();
        ~Game();
        void Init();
        void Idle(float delta_time);
        void Draw();
    private:
    int m_score;


};

#endif // GAME_H
