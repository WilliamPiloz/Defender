/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** event_map2.c
*/

#include "my_defender.h"

void check_circlelvl23(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1641, 645, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1641;
        all->add_circle.y = 645;
        }
    if (get_distance(1571, 970, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1571;
        all->add_circle.y = 970;
        }
}

void check_circlelvl22(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(874, 290, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 874;
        all->add_circle.y = 290;
        }
    if (get_distance(1573, 307, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1573;
        all->add_circle.y = 307;
        }
    if (get_distance(1233, 589, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1233;
        all->add_circle.y = 589;
        }
    check_circlelvl23(mouse, all);
}

void check_circlelvl2(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(130, 667, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 130;
        all->add_circle.y = 667;
        }
    if (get_distance(531, 637, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 531;
        all->add_circle.y = 637;
        }
    check_circlelvl22(mouse, all);
}

void event_menu_lvl2(sfMouseButtonEvent *mouse, all_t *all)
{
    check_circlelvl2(mouse, all);
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
