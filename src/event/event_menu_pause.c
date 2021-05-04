/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** event_menu3.c
*/

#include "my_defender.h"

void event_menu3p2(sfMouseButtonEvent *mouse, all_t *all)
{
    int tmp = 0;

    if ((mouse->x >= 808 && mouse->x <= 1131) &&
    (mouse->y >= 384 && mouse->y <= 545)) {
        sfMusic_stop(all->music_menu.music);
        tmp = all->last_scene;
        all->last_scene = all->scene;
        all->scene = tmp;
    }
    if ((mouse->x >= 803 && mouse->x <= 1131) &&
    (mouse->y >= 568 && mouse->y <= 736)) {
        all->scene_tmp = 1;
        all->scene = 2;
    }
}

void event_menu3p1(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 1189 && mouse->x <= 1346) &&
    (mouse->y >= 765 && mouse->y <= 919)) {
        all->bar_life.but_r.width = 275;
        sfSprite_setTextureRect(all->bar_life.but_s, all->bar_life.but_r);
        all->life = 100;
        all->money.nb = 150;
        all->scene = 0;
        all->last_scene = 0;
        list_destroy_t(&all->tower);
        list_destroy(&all->mobs);
        init_all_mob(all);
        all->tower = NULL;
    }
    event_menu3p2(mouse, all);
}

void event_menu3(sfMouseButtonEvent *mouse, all_t *all)
{
    int tmp = 0;
    if ((mouse->x >= 569 && mouse->x <= 727) &&
    (mouse->y >= 761 && mouse->y <= 916)) {
        sfMusic_stop(all->music_menu.music);
        all->bar_life.but_r.width = 275;
        sfSprite_setTextureRect(all->bar_life.but_s, all->bar_life.but_r);
        all->life = 100;
        all->money.nb = 150;
        tmp = all->last_scene;
        all->last_scene = all->scene;
        all->scene = tmp;
        list_destroy_t(&all->tower);
        list_destroy(&all->mobs);
        init_all_mob(all);
        all->tower = NULL;
    }
    event_menu3p1(mouse, all);
}