/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** init.c
*/

#include "my_defender.h"

void init_main_menu(menu_t *menu)
{
    menu->bg_m_r.left = 0;
    menu->bg_m_r.top = 0;
    menu->bg_m_r.height = 1080;
    menu->bg_m_r.width = 1920;
    menu->bg_m_t = sfTexture_createFromFile("asset/menu/bg.png", NULL);
    menu->bg_m_s = sfSprite_create();
    sfSprite_setTexture(menu->bg_m_s, menu->bg_m_t, sfTrue);
    sfSprite_setTextureRect(menu->bg_m_s, menu->bg_m_r);
    menu->dark_r.left = 0;
    menu->dark_r.top = 0;
    menu->dark_r.height = 1080;
    menu->dark_r.width = 1920;
    menu->dark_t = sfTexture_createFromFile("asset/menu/dark.png", NULL);
    menu->dark_s = sfSprite_create();
    sfSprite_setTexture(menu->dark_s, menu->dark_t, sfTrue);
}

void init_button(button_t *button, char *str, img_size_t size)
{
    button->pos.x = size.x;
    button->pos.y = size.y;
    button->but_r.left = 0;
    button->but_r.top = 0;
    button->but_r.height = size.height;
    button->but_r.width = size.width;
    button->but_t = sfTexture_createFromFile(str, NULL);
    button->but_s = sfSprite_create();
    sfSprite_setTexture(button->but_s, button->but_t, sfTrue);
    sfSprite_setTextureRect(button->but_s, button->but_r);
    sfSprite_setPosition(button->but_s, button->pos);
}

img_size_t set_rec(int x, int y, int height, int width)
{
    img_size_t size;
    size.x = x;
    size.y = y;
    size.height = height;
    size.width = width;
    return (size);
}

void init_general(img_t *img, char *str)
{
    img->img_r.left = 0;
    img->img_r.top = 0;
    img->img_r.height = 1080;
    img->img_r.width = 1920;
    img->img_t = sfTexture_createFromFile(str, NULL);
    img->img_s = sfSprite_create();
    sfSprite_setTexture(img->img_s, img->img_t, sfTrue);
}

void init(all_t *all)
{
    all->mobs = NULL;
    all->tower = NULL;
    all->win.window = sfRenderWindow_create
    (*sfVideoMode_getFullscreenModes(0), "my_defender", sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(all->win.window, 60);
    init_money(all);
    init_score(all);
    init_sc(all);
    all->money.nb = 150;
    all->score.nb = 0;
    all->scene_tmp = 0;
    all->music_menu.music = sfMusic_createFromFile("asset/music/menu.ogg");
    sfMusic_setLoop(all->music_menu.music, sfTrue);
    all->volume_music = 50;
    sfMusic_setVolume(all->music_menu.music, all->volume_music);
    sfMusic_play(all->music_menu.music);
    init_main_menu(&all->menu);
    init_general_sprite(all);
    init_button_sprite(all);
    init_path(all);
}