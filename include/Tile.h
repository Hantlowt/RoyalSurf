#ifndef TILE_H
#define TILE_H
#include "Draw.h"
#include <iostream>

class Tile
{
    public:
        Tile();
        virtual ~Tile();
        void Draw();
        void Set_Coordinate(int x, int y);
    protected:
    private:
    struct Position
    {
    GLfloat x;
    GLfloat y;
    };
    typedef struct Position Position;
    Position m_Tile_position;
    GLfloat *Texture;
};

#endif // TILE_H
