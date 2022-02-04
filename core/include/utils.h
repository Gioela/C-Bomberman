#pragma once
#include <SDL.h>

/*
 * Read the input bmp file and return the bytes datas
 *
 * @param bmp_name bmp file name which want to load
 * @param open_as in which way bmp_name must be open
 * @param bmp_datas in success case, it will contains all read bmp bytes
 * 
 * @return 0 in success case, otherwise -1.
 */
int utils_load_bmp(const char *bmp_name, const char *open_as, Uint8 **bmp_data);

/*
 * Given the bmp datas return (in out) the texture
 *
 * @param bmp_data bytes array of the bmp file input
 * @param channels how many channel is composed each byte
 * @param renderer SDL_Renderer where the texture must be rendered
 * @param texture in success case, it will store the read texture data
 * 
 * @return 0 in success case, otherwise -1
 */
int utils_get_texture(Uint8 *bmp_data, Uint8 channels, SDL_Renderer *renderer, SDL_Texture **texture);