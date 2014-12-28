#ifndef GAME_H
#define GAME_H
#include "Draw.h"
#include <iostream>
#include "Camera.h"

class Game
{
    public:
        Game();
        ~Game();
        void Init();
        void Idle(float delta_time);
        void Draw();
        void MouseFunc(int button, int state, int x, int y);
    private:
    int m_score;
    float delta;
    struct Background_Color
    {
    GLfloat R;
    GLfloat G;
    GLfloat B;
    GLfloat T;
    };
    typedef struct Background_Color Background_Color;
    Background_Color m_background_color;

    Camera *camera;


};

#endif // GAME_H
