#include "Map.h"

Map::Map(int mapsize)
{
    m_tiles = new Tile[mapsize];
    m_mapsize = mapsize;
}

Map::~Map()
{
    //dtor
}

void Map::Init()
{
int i = 0;
while(i <= m_mapsize)
{
m_tiles[i].Set_Coordinate(i+2, 0);
i++;
}

}

void Map::Draw()
{
int i = 0;
while(i <= m_mapsize)
{
m_tiles[i].Draw();
i++;
}

}
