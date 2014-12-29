#include "Tile.h"

Tile::Tile()
{
    this->m_Tile_position.x = 0;
    this->m_Tile_position.y = 0;
    this->Texture = 0;
}

Tile::~Tile()
{
    //dtor
}

void Tile::Draw()
{
draw_quad(this->m_Tile_position.x, this->m_Tile_position.y, 0);

}

void Tile::Set_Coordinate(int x, int y)
{
this->m_Tile_position.x = x;
this->m_Tile_position.y = y;
}
