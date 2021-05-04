/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** event_menu4.c
*/

#include "my_defender.h"

void event_menu4p2(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 1080 && mouse->x <= 1192) &&
    (mouse->y >= 870 && mouse->y <= 980)) {
        all->bar_life.but_r.width = 275;
        all->star.but_r.left = 0;
        all->life = 100;
        all->money.nb = 150;
        sfMusic_stop(all->music_menu.music);
        all->scene = 1;
        all->last_scene = 0;
        list_destroy_t(&all->tower);
        list_destroy(&all->mobs);
        all->tower = NULL;
        sfSprite_setTextureRect(all->bar_life.but_s, all->bar_life.but_r);
        sfSprite_setTextureRect(all->star.but_s, all->star.but_r);
    }
}

void event_menu4p1(sfMouseButtonEvent *mouse, all_t *all)
{
    int tmp = 0;
    if ((mouse->x >= 895 && mouse->x <= 1006) &&
    (mouse->y >= 870 && mouse->y <= 980)) {
        all->bar_life.but_r.width = 275;
        all->star.but_r.left = 0;
        all->life = 100;
        all->money.nb = 150;
        sfMusic_stop(all->music_menu.music);
        tmp = all->last_scene;
        all->last_scene = all->scene;
        all->scene = tmp;
        list_destroy_t(&all->tower);
        list_destroy(&all->mobs);
        init_all_mob(all);
        all->tower = NULL;
        sfSprite_setTextureRect(all->bar_life.but_s, all->bar_life.but_r);
        sfSprite_setTextureRect(all->star.but_s, all->star.but_r);
    }
    event_menu4p2(mouse, all);
}

void event_menu4(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 714 && mouse->x <= 826) &&
    (mouse->y >= 870 && mouse->y <= 980)) {
        all->bar_life.but_r.width = 275;
        all->star.but_r.left = 0;
        all->life = 100;
        all->scene = 0;
        all->last_scene = 0;
        list_destroy_t(&all->tower);
        list_destroy(&all->mobs);
        all->tower = NULL;
        sfSprite_setTextureRect(all->bar_life.but_s, all->bar_life.but_r);
        sfSprite_setTextureRect(all->star.but_s, all->star.but_r);
    }
    event_menu4p1(mouse, all);
}