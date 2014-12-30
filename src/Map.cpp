#include "Map.h"

Map::Map(int mapsize, int part_size, Loader &ori_loader)
{
    m_tiles = new Tile[mapsize];
    m_mapsize = mapsize;
    m_part_size = part_size;
    this->loader = &ori_loader;
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
m_tiles->Init(m_part_size, *loader);
int min = 0;
int max = 100;
int level = 0;
if(i>0)
{
int random = (min + (rand() % (int)(max - min + 1)));

if(random < 30)
{
level = 2;
}
if(random > 70)
{
level = -2;
}
level = m_tiles[i-1].Get_Coordinate_y() + level;
}


m_tiles[i].Set_Coordinate(i*2, level);
i++;


}
}

void Map::Draw()
{
int i = 0;
while(i <= m_mapsize)
{
m_tiles[i].Draw();
int u = 1;
while (u<=20)
{
draw_quad(m_tiles[i].Get_Coordinate_x(), m_tiles[i].Get_Coordinate_y()-u, 0);
u++;
}
i++;
}

}
