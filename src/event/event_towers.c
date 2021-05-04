/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** event_towers.c
*/

#include "my_defender.h"

void set_circle(all_t *all)
{
    sfVector2f vec;
    vec.x = 115;
    vec.y = 103;
    all->circle.pos.x = all->add_circle.x;
    all->circle.pos.y = all->add_circle.y;
    sfSprite_setOrigin(all->circle.but_s, vec);
    sfSprite_setPosition(all->circle.but_s, all->circle.pos);
    sfRenderWindow_drawSprite(all->win.window, all->circle.but_s, NULL);
    all->add_circle.add = 2;
}

void event_towersp1(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= all->circle.pos.x + 30 &&
    mouse->x <= all->circle.pos.x + 115) &&
    (mouse->y <= all->circle.pos.y + 103 &&
    mouse->y >= all->circle.pos.y + 32)) {
        all->add_circle.add = 0;
        list_push_back_t(&(all->tower), init_towers("asset/towers/fire.png",
        set_rec(all->add_circle.x, all->add_circle.y - 30, 116, 100)), 2, 200);
        all->money.nb -= 100;
    }
    if ((mouse->x >= all->circle.pos.x - 115 &&
    mouse->x <= all->circle.pos.x - 30) &&
    (mouse->y <= all->circle.pos.y + 103 &&
    mouse->y >= all->circle.pos.y - 32)) {
        all->add_circle.add = 0;
        list_push_back_t(&(all->tower), init_towers("asset/towers/archer.png",
        set_rec(all->add_circle.x, all->add_circle.y - 35, 134, 100)), 4, 230);
        all->money.nb -= 100;
    }

}

void event_towers(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= all->add_circle.x - 115 &&
    mouse->x <= all->add_circle.x - 30) &&
    (mouse->y >= all->add_circle.y - 90 &&
    mouse->y <= all->add_circle.y - 21)) {
        all->add_circle.add = 0;
        list_push_back_t(&(all->tower), init_towers("asset/towers/magics.png",
        set_rec(all->add_circle.x, all->add_circle.y - 60, 192, 100)), 5, 210);
        all->money.nb -= 100;
    }
    if ((mouse->x >= all->circle.pos.x + 30 &&
    mouse->x <= all->circle.pos.x + 115) &&
    (mouse->y <= all->circle.pos.y - 21 &&
    mouse->y >= all->circle.pos.y - 90)) {
        all->add_circle.add = 0;
        list_push_back_t(&(all->tower), init_towers("asset/towers/stone.png",
        set_rec(all->add_circle.x, all->add_circle.y - 15, 107, 100)), 1, 200);
        all->money.nb -= 100;
    }
    event_towersp1(mouse, all);
}