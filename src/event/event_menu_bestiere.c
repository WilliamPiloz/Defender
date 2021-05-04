/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** event_menu8.c
*/

#include "my_defender.h"

void event_menu8(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 1410 && mouse->x <= 1548) &&
    (mouse->y >= 940 && mouse->y <= 1078)) {
        all->last_scene = all->scene;
        all->scene = 14;
    }
    if (get_distance(1560, 54, mouse->x, mouse->y) < 49)
        all->scene = 0;
}
