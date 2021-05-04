/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** event_map_inf.c
*/

#include "my_defender.h"

void check_circleinf3(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1274, 906, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1274;
        all->add_circle.y = 906;
    }
    if (get_distance(682, 986, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 682;
        all->add_circle.y = 986;
    }
    if (get_distance(330, 698, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 330;
        all->add_circle.y = 986;
    }
}

void check_circleinf2(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1166, 254, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1166;
        all->add_circle.y = 254;
    }
    if (get_distance(1516, 254, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1516;
        all->add_circle.y = 254;
    }
    if (get_distance(1470, 598, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1470;
        all->add_circle.y = 598;
    }
}

void check_circleinf(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(162, 208, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 162;
        all->add_circle.y = 208;
    }
    if (get_distance(768, 284, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 768;
        all->add_circle.y = 284;
    }
    check_circleinf2(mouse, all);
    check_circleinf3(mouse, all);
}

void event_menu_lvl_inf(sfMouseButtonEvent *mouse, all_t *all)
{
    check_circleinf(mouse, all);
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
