/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** event_map4.c
*/

#include "my_defender.h"

void check_circle3(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1208, 700, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1208;
        all->add_circle.y = 700;
        }
    if (get_distance(1424, 392, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1424;
        all->add_circle.y = 392;
        }
    if (get_distance(1746, 472, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1746;
        all->add_circle.y = 472;
        }
    if (get_distance(1048, 440, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1048;
        all->add_circle.y = 440;
        }
}

void check_circle2(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(1714, 993, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1714;
        all->add_circle.y = 993;
        }
    if (get_distance(820, 664, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 820;
        all->add_circle.y = 664;
        }
    if (get_distance(1206, 700, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1206;
        all->add_circle.y = 700;
        }
    check_circle3(mouse, all);
}

void check_circle(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(163, 993, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 163;
        all->add_circle.y = 993;
        }
    if (get_distance(562, 993, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 562;
        all->add_circle.y = 993;
        }
    if (get_distance(1314, 993, mouse->x, mouse->y) < 80) {
        all->add_circle.add = 1;
        all->add_circle.x = 1314;
        all->add_circle.y = 993;
        }
    check_circle2(mouse, all);
}

void event_menu_lvl4(sfMouseButtonEvent *mouse, all_t *all)
{
    check_circle(mouse, all);
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