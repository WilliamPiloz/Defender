/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** my_runner.h
*/

#ifndef __MY_DEFENDER__
#define __MY_DEFENDER__

#define WIDTH 1920
#define HEIGHT 1080

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <SFML/Config.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Window.h>
#include <unistd.h>
#include <SFML/Audio.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

typedef struct menu {
    sfSprite* bg_m_s;
    sfTexture* bg_m_t;
    sfIntRect bg_m_r;
    sfSprite* dark_s;
    sfTexture* dark_t;
    sfIntRect dark_r;
}menu_t;

typedef struct img {
    sfSprite* img_s;
    sfTexture* img_t;
    sfIntRect img_r;
    sfVector2f pos;
}img_t;

typedef struct button {
    sfSprite* but_s;
    sfTexture* but_t;
    sfIntRect but_r;
    sfVector2f pos;
}button_t;

typedef struct clock {
    float sec;
    sfClock* clock;
    sfTime time;
}clocks_t;

typedef struct img_size {
    int x;
    int y;
    int height;
    int width;
}img_size_t;

typedef struct music {
    sfMusic *music;
}music_t;

typedef struct wind {
    sfRenderWindow* window;
}win_t;

typedef struct path {
    int coordinate[30][2];
}path_t;

typedef struct mobs {
    img_t mob;
    int coord;
    int life;
    struct mobs *next;
}mobs_t;

typedef struct towers {
    img_t towers;
    int dmg;
    int range;
    struct towers *next;
}towers_t;

typedef struct add_circle {
    int add;
    int x;
    int y;
} add_circle_t;

typedef struct text {
    char array[5];
    float nb;
    sfText *text;
    sfFont *font;
    sfVector2f position;
}money;

typedef struct score {
    char array[6];
    float nb;
    sfText *text;
    sfFont *font;
    sfVector2f position;
}score;

typedef struct all_struct {
    int scene;
    int last_scene;
    int scene_tmp;
    int fps;
    int volume_music;
    int life;
    money money;
    money score;
    score sc;
    win_t win;
    menu_t menu;
    clocks_t clocks;
    sfEvent event;
    button_t button[13];
    button_t circle;
    button_t bar_life;
    button_t star;
    towers_t *tower;
    music_t music_menu;
    img_t menu0;
    img_t menu1;
    img_t menu2;
    img_t menu3;
    img_t menu4;
    img_t menu5;
    img_t menu6;
    img_t menu7;
    img_t menu8;
    img_t menu9;
    img_t menu10;
    img_t map1;
    img_t map2;
    img_t map3;
    img_t map4;
    img_t mapinf;
    img_t overlay;
    mobs_t *mobs;
    img_t init_mob;
    img_size_t size;
    path_t pmap1;
    path_t pmap2;
    path_t pmap3;
    path_t pmap4;
    path_t pmapinf;
    path_t pmap;
    add_circle_t add_circle;
}all_t;

//~~~~~{Destroy}~~~~~
void destroy_all(all_t *all);

//~~~~~{Init}~~~~~
void init(all_t *all);
void init_sc(all_t *all);
void init_path(all_t *all);
void init_money(all_t *all);
void init_score(all_t *all);
void init_path1(all_t *all);
void init_path2(all_t *all);
void init_path3(all_t *all);
void init_path4(all_t *all);
void init_pathinf(all_t *all);
void init_all_mob(all_t *all);
void init_all_towers(all_t *all);
void init_main_menu(menu_t *menu);
void init_button_sprite(all_t *all);
void init_general_sprite(all_t *all);
void init_general(img_t *img, char *str);
img_t init_mobs(char *path, img_size_t size);
img_t init_towers(char *path, img_size_t size);
img_size_t set_rec(int x, int y, int height, int width);
img_size_t set_rec(int x, int y, int height, int width);
void init_button(button_t *button, char *str, img_size_t size);


//~~~~~{Event}~~~~~
void event(all_t *all);
void menu0_event(all_t *all, sfVector2i mouse);
void event_menu0(sfMouseButtonEvent *mouse, all_t *all);
void event_menu1(sfMouseButtonEvent *mouse, all_t *all);
void event_menu2(sfMouseButtonEvent *mouse, all_t *all);
void event_menu3(sfMouseButtonEvent *mouse, all_t *all);
void event_menu6(sfMouseButtonEvent *mouse, all_t *all);
void event_menu7(sfMouseButtonEvent *mouse, all_t *all);
void event_menu8(sfMouseButtonEvent *mouse, all_t *all);
void event_menu9(sfMouseButtonEvent *mouse, all_t *all);
void event_menu10(sfMouseButtonEvent *mouse, all_t *all);
void event_overlay(sfMouseButtonEvent *mouse, all_t *all);
void event_menu_lvl_inf(sfMouseButtonEvent *mouse, all_t *all);
void event_menu_lvl1(sfMouseButtonEvent *mouse, all_t *all);
void event_menu_lvl2(sfMouseButtonEvent *mouse, all_t *all);
void event_menu_lvl3(sfMouseButtonEvent *mouse, all_t *all);
void event_menu_lvl4(sfMouseButtonEvent *mouse, all_t *all);
void event_towers(sfMouseButtonEvent *mouse, all_t *all);
void set_circle(all_t *all);
void event_menu5(sfMouseButtonEvent *mouse, all_t *all);
void event_menu4(sfMouseButtonEvent *mouse, all_t *all);

//~~~~~{Display}~~~~~
void display(all_t *all);
void display_menu_map1(all_t *all);
void display_menu_map2(all_t *all);
void display_menu_map3(all_t *all);
void display_menu_map4(all_t *all);
void display_menu_map_inf(all_t *all);
void display_menu_bestiere(all_t *all);
void display_menu_bestiere2(all_t *all);
void display_menu_help(all_t *all);
void display_menu_help2(all_t *all);
void display_menu_lvl(all_t *all);
void display_menu_loose_inf(all_t *all);
void display_menu_loose(all_t *all);
void display_menu_pause(all_t *all);
void display_menu_settings(all_t *all);
void display_menu_start(all_t *all);
void display_menu_win(all_t *all);
void display_mob(all_t *all);
void display_towers(all_t *all);

//~~~~~{Move}~~~~~
void move_mobs(mobs_t **mobs, all_t *all);
void towers_shoot(all_t *all, mobs_t **mobs, towers_t **tower);

//~~~~~{Tools}~~~~~
void my_putchar(char);
int my_atoi(char *str);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void list_destroy(mobs_t **mobs);
void list_destroy_t(towers_t **tower);
int my_strcmp(char *s1, char *s2);
void my_int_str(char *str, int nb);
bool free_at(mobs_t **list, int idx);
void list_push_back(mobs_t **mobs, img_t img, int coord);
float get_distance(int cx, int cy, int x, int y);
void list_push_back_t(towers_t **mobs, img_t img, int dmg, int range);

#endif