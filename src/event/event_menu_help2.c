/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** event_menu7.c
*/

#include "my_defender.h"

void event_menu10(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1407, 250, mouse->x, mouse->y) < 49) {
        all->scene = 0;
    }
    if ((mouse->x >= 529 && mouse->x <= 696) &&
    (mouse->y >= 769 && mouse->y <= 930)) {
        all->last_scene = all->scene;
        all->scene = 7;
    }
}