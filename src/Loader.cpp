#include "Loader.h"

Loader::Loader()
{

}

Loader::~Loader()
{
    //dtor
}

void Loader::Init_Texture_Tiles(int nbr)
{
this->m_tiles_texture = new GLuint[nbr];
this->m_tiles_texture2 = new GLuint[nbr];
int i = 0;
while(i < nbr)
{
m_tiles_texture[i] = load_tile_texture(i);
m_tiles_texture2[i] = load_tile_texture2(i);
i++;
}
}

GLuint Loader::Get_Texture_Tile(int id)
{
return m_tiles_texture[id];
}

GLuint Loader::Get_Texture_Tile2(int id)
{
return m_tiles_texture2[id];
}

GLuint load_tile_texture(int id)
{
char *path = new char;
sprintf(path, "data/tiles/a%d.bmp", id);

return LoadTexture(path);
}

GLuint load_tile_texture2(int id)
{
char *path = new char;
sprintf(path, "data/tiles/b%d.bmp", id);

return LoadTexture(path);
}

GLuint LoadTexture( const char * filename )
{

  GLuint texture;

  int width, height;

  unsigned char * data;

  FILE * file;

  file = fopen( filename, "rb" );

  if ( file == NULL ) return 0;
  width = 1024;
  height = 512;
  data = (unsigned char *)malloc( width * height * 3 );
  //int size = fseek(file,);
  fread( data, width * height * 3, 1, file );
  fclose( file );

 for(int i = 0; i < width * height ; ++i)
{
   int index = i*3;
   unsigned char B,R;
   B = data[index];
   R = data[index+2];

   data[index] = R;
   data[index+2] = B;

}


glGenTextures( 1, &texture );
glBindTexture( GL_TEXTURE_2D, texture );
glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE,GL_MODULATE );
glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_NEAREST );


glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,GL_LINEAR );
glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S,GL_REPEAT );
glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T,GL_REPEAT );
//gluBuild2DMipmaps( GL_TEXTURE_2D, 3, width, height,GL_RGB, GL_UNSIGNED_BYTE, data );
glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
free( data );

return texture;
}
