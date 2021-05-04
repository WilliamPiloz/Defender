/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** event_map1.c
*/

#include "my_defender.h"

void check_circlelvl13(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1174, 315, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1174;
        all->add_circle.y = 315;
    }
    if (get_distance(1471, 315, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1471;
        all->add_circle.y = 315;
    }
    if (get_distance(1020, 650, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1020;
        all->add_circle.y = 650;
    }
}

void check_circlelvl12(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1515, 650, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1515;
        all->add_circle.y = 650;
    }
    if (get_distance(1446, 650, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1446;
        all->add_circle.y = 650;
    }
    if (get_distance(876, 315, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 876;
        all->add_circle.y = 315;
    }
    check_circlelvl13(mouse, all);
}

void check_circlelvl1(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(720, 660, mouse->x, mouse->y) < 80){
        all->add_circle.add = 1;
        all->add_circle.x = 720;
        all->add_circle.y = 660;
    }
    if (get_distance(876, 980, mouse->x, mouse->y) < 80){
        all->add_circle.add = 1;
        all->add_circle.x = 876;
        all->add_circle.y = 980;
    }
    check_circlelvl12(mouse, all);
}

void event_menu_lvl1(sfMouseButtonEvent *mouse, all_t *all)
{
    check_circlelvl1(mouse, all);
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
