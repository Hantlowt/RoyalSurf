#ifndef MAP_H
#define MAP_H
#include "Tile.h"
#include <iostream>
#include "Loader.h"
class Map
{
    public:
        Map(int mapsize, int part_size, Loader &ori_loader);
        virtual ~Map();
        void Init();
        void Draw();
    protected:
    private:
    int m_mapsize;
    int m_part_size;
    Tile *m_tiles;
    Loader *loader;
};

#endif // MAP_H
