/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** event_menu5.c
*/

#include "my_defender.h"

void event2(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 1027 && mouse->x <= 1162) &&
    (mouse->y >= 856 && mouse->y <= 987)) {
        all->life = 100;
        all->money.nb = 150;
        all->bar_life.but_r.width = 275;
        sfSprite_setTextureRect(all->bar_life.but_s, all->bar_life.but_r);
        sfMusic_stop(all->music_menu.music);
        all->scene = all->last_scene;
        list_destroy_t(&all->tower);
        list_destroy(&all->mobs);
        init_all_mob(all);
        all->tower = NULL;
    }
}

void event_menu5(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 771 && mouse->x <= 903) &&
    (mouse->y >= 856 && mouse->y <= 987)) {
        all->life = 100;
        all->bar_life.but_r.width = 275;
        sfSprite_setTextureRect(all->bar_life.but_s, all->bar_life.but_r);
        all->scene = 0;
        all->last_scene = 0;
        list_destroy_t(&all->tower);
        list_destroy(&all->mobs);
        all->tower = NULL;
    }
    event2(mouse, all);
}