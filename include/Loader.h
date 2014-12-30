#ifndef LOADER_H
#define LOADER_H
#include "Draw.h"

GLuint load_tile_texture(int id);
GLuint load_tile_texture2(int id);
GLuint LoadTexture( const char * filename );
class Loader
{
    public:
        Loader();
        virtual ~Loader();
        void Init_Texture_Tiles(int nbr);
        GLuint Get_Texture_Tile(int id);
        GLuint Get_Texture_Tile2(int id);
    protected:
    private:
    int m_nbr_texture_tiles;
    GLuint *m_tiles_texture;
    GLuint *m_tiles_texture2;
};

#endif // LOADER_H
