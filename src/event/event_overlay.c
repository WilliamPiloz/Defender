/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** evne_overlay.c
*/

#include "my_defender.h"

void event_overlay(sfMouseButtonEvent *mouse, all_t *all)
{
    if (all->scene == 8)
        event_menu_lvl1(mouse, all);
    if (all->scene == 9)
        event_menu_lvl2(mouse, all);
    if (all->scene == 10)
        event_menu_lvl3(mouse, all);
    if (all->scene == 11)
        event_menu_lvl4(mouse, all);
    if (all->scene == 12)
        event_menu_lvl_inf(mouse, all);
    if ((mouse->x >= 1751 && mouse->x <= 1859) &&
    (mouse->y >= 913 && mouse->y <= 1020)) {
        sfMusic_play(all->music_menu.music);
        all->last_scene = all->scene;
        all->scene = 3;
    }
}
