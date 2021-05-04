/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** event_menu7.c
*/

#include "my_defender.h"

void event_menu7(sfMouseButtonEvent *mouse, all_t *all)
{
    int tmp = 0;
    if (get_distance(1408, 251, mouse->x, mouse->y) < 49) {
        tmp = all->scene;
        all->scene = all->last_scene;
        all->last_scene = tmp;
    }
    if ((mouse->x >= 1233 && mouse->x <= 1395) &&
    (mouse->y >= 777 && mouse->y <= 939)) {
        all->last_scene = all->scene;
        all->scene = 15;
    }
}