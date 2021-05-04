/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** display_menu_pause.c
*/

#include "my_defender.h"

void display_menu_pause2(all_t *all)
{
    if (all->last_scene == 11 || all->scene_tmp == 2) {
        all->scene_tmp = 0;
        all->last_scene = 11;
        sfRenderWindow_drawSprite(all->win.window, all->map4.img_s, NULL);
    }
    if (all->last_scene == 12 || all->scene_tmp == 2) {
        all->scene_tmp = 0;
        all->last_scene = 12;
        sfRenderWindow_drawSprite(all->win.window, all->mapinf.img_s, NULL);
    }
}

void display_menu_pause(all_t *all)
{
    if (all->last_scene == 8 || all->scene_tmp == 2) {
        all->scene_tmp = 0;
        all->last_scene = 8;
        sfRenderWindow_drawSprite(all->win.window, all->map1.img_s, NULL);
    }
    if (all->last_scene == 9 || all->scene_tmp == 2) {
        all->scene_tmp = 0;
        all->last_scene = 9;
        sfRenderWindow_drawSprite(all->win.window, all->map2.img_s, NULL);
    }
    if (all->last_scene == 10 || all->scene_tmp == 2) {
        all->scene_tmp = 0;
        all->last_scene = 10;
        sfRenderWindow_drawSprite(all->win.window, all->map3.img_s, NULL);
    }
    display_menu_pause2(all);
    sfRenderWindow_drawSprite(all->win.window, all->menu3.img_s, NULL);
}