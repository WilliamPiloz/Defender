/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** event_menu8.c
*/

#include "my_defender.h"

void event_menu9(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 366 && mouse->x <= 510) &&
    (mouse->y >= 942 && mouse->y <= 1080)) {
        all->last_scene = all->scene;
        all->scene = 13;
    }
    if (get_distance(1564, 58, mouse->x, mouse->y) < 49)
        all->scene = 0;
}
