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

void Tile::Init(int m_id_tile, Loader &ori_loader)
{
this->loader = &ori_loader;
this->Texture = loader->Get_Texture_Tile(m_id_tile);
}

void Tile::Draw()
{
draw_quad(this->m_Tile_position.x, this->m_Tile_position.y, Texture);

}

void Tile::Set_Coordinate(int x, int y)
{
this->m_Tile_position.x = x;
this->m_Tile_position.y = y;
}

int Tile::Get_Coordinate_x()
{
return this->m_Tile_position.x;
}

int Tile::Get_Coordinate_y()
{
return this->m_Tile_position.y;
}
