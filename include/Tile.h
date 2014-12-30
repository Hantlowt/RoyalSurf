#ifndef TILE_H
#define TILE_H
#include "Draw.h"
#include <iostream>
#include "Loader.h"
class Tile
{
    public:
        Tile();
        virtual ~Tile();
        void Init(int m_id_tile, Loader &ori_loader);
        void Draw();
        void Set_Coordinate(int x, int y);
        int Get_Coordinate_x();
        int Get_Coordinate_y();
    protected:
    private:
    struct Position
    {
    GLfloat x;
    GLfloat y;
    };
    typedef struct Position Position;
    Position m_Tile_position;
    int m_id_tile;
    GLuint Texture;
    Loader *loader;
};

#endif // TILE_H
