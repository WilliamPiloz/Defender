/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** event_map3.c
*/

#include "my_defender.h"

void check_circlelvl33(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1285, 396, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1285;
        all->add_circle.y = 396;
    }
    if (get_distance(1683, 396, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1683;
        all->add_circle.y = 396;
    }
}

void check_circlelvl32(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1195, 721, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1195;
        all->add_circle.y = 721;
    }
    if (get_distance(1618, 724, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1618;
        all->add_circle.y = 724;
    }
    if (get_distance(877, 396, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 877;
        all->add_circle.y = 396;
    }
    check_circlelvl33(mouse, all);
}

void check_circlelvl3(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(546, 964, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 546;
        all->add_circle.y = 964;
    }
    if (get_distance(753, 705, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 753;
        all->add_circle.y = 705;
    }
    check_circlelvl32(mouse, all);
}

void event_menu_lvl3(sfMouseButtonEvent *mouse, all_t *all)
{
    check_circlelvl3(mouse, all);
    if (all->add_circle.add == 2) {
        if (!((mouse->x <= all->circle.pos.x + 115 &&
        mouse->x >= all->circle.pos.x - 115) &&
        (mouse->y <= all->circle.pos.y + 103 &&
        mouse->y >= all->circle.pos.y - 103))) {
            all->add_circle.add = 0;
        }
    }
    if (all->add_circle.add == 2 && all->money.nb >= 100)
        event_towers(mouse, all);
}