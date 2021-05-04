/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** event_menu1.c
*/

#include "my_defender.h"

void event_menu1p3(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 1217 && mouse->x <= 1374) &&
    (mouse->y >= 384 && mouse->y <= 538)) {
        sfMusic_stop(all->music_menu.music);
        all->last_scene = all->scene;
        all->scene = 11;
        all->pmap = all->pmap4;
        init_all_mob(all);
    }
    if ((mouse->x >= 745 && mouse->x <= 1135) &&
    (mouse->y >= 584 && mouse->y <= 780)) {
        sfMusic_stop(all->music_menu.music);
        all->last_scene = all->scene;
        all->scene = 12;
        all->pmap = all->pmapinf;
        init_all_mob(all);
    }
}

void event_menu1p2(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 999 && mouse->x <= 1153) &&
    (mouse->y >= 376 && mouse->y <= 536)) {
        sfMusic_stop(all->music_menu.music);
        all->last_scene = all->scene;
        all->scene = 10;
        init_all_mob(all);
        all->pmap = all->pmap3;
    }
    if ((mouse->x >= 771 && mouse->x <= 930) &&
    (mouse->y >= 379 && mouse->y <= 536)) {
        sfMusic_stop(all->music_menu.music);
        all->last_scene = all->scene;
        all->scene = 9;
        all->pmap = all->pmap2;
        init_all_mob(all);
    }
    event_menu1p3(mouse, all);
}

void event_menu1(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1408, 241, mouse->x, mouse->y) < 49) {
        all->scene = 0;
        all->last_scene = 1;
    }
    if ((mouse->x >= 550 && mouse->x <= 711) &&
    (mouse->y >= 382 && mouse->y <= 537)) {
        sfMusic_stop(all->music_menu.music);
        all->last_scene = all->scene;
        all->scene = 8;
        all->pmap = all->pmap1;
        init_all_mob(all);
    }
    event_menu1p2(mouse, all);
}