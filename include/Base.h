#ifndef BASE_H
#define BASE_H
#include <stdio.h>
#include <GL/glut.h>

class Base
{
    public:
        Base();
        ~Base();
        void Init(int argc, char** argv);
        void Idle();
        void Draw();
        void Reshape();
    private:
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

};

#endif // BASE_H
