#ifndef GRAPHICS_H
#define GRAPHICS_H


/**
 * Draws the player. This depends on the player state, so it is not a DrawFunc.
 */
void draw_player(int u, int v, int key, int fast);

/**
 * Takes a string image and draws it to the screen. The string is 121 characters
 * long, and represents an 11x11 tile in row-major ordering (across, then down,
 * like a regular multi-dimensional array). The available colors are:
 *      R = Red
 *      Y = Yellow
 *      G = Green
 *      D = Brown ("dirt")
 *      5 = Light grey (50%)
 *      3 = Dark grey (30%)
 *      Any other character is black
 * More colors can be easily added by following the pattern already given.
 */
void draw_img(int u, int v, const char* img);

/**
 * DrawFunc functions. 
 * These can be used as the MapItem draw functions.
 */
void draw_nothing(int u, int v);
void draw_wall(int u, int v);
void draw_plant(int u, int v);

/**
 * Draw the upper status bar.
 */
void draw_upper_status(int u, int v);

/**
 * Draw the lower status bar.
 */ 
void draw_lower_status(int hp);

/**
 * Draw the border for the map.
 */
void draw_border();
void draw_NPC(int u, int v);
void draw_door(int u, int v);
void draw_stair(int u, int v);
void draw_fspell(int u, int v);
void draw_wspell(int u, int v);
void draw_w2spell(int u, int v);
void draw_die(int u, int v);
void draw_mst(int u, int v);
void draw_tree(int u, int v);
void draw_wood(int u, int v);
void draw_leaf(int u, int v);

#endif // GRAPHICS_H