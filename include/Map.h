#ifndef MAP_H
#define MAP_H
#include "Tile.h"
#include <iostream>
class Map
{
    public:
        Map(int mapsize);
        virtual ~Map();
        void Init();
        void Draw();
        void Set_Coordinate(int x, int y);
    protected:
    private:
    int m_mapsize;
    Tile *m_tiles;
};

#endif // MAP_H
