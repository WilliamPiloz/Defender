/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** event_menu0.c
*/

#include "my_defender.h"

void menu0_event(all_t *all, sfVector2i mouse)
{
    if (get_distance(all->button[0].pos.x + 50, all->button[0].pos.y + 49,
    mouse.x, mouse.y) < 60.0) {
        all->button[0].but_r.top = 120;
        sfSprite_setTextureRect(all->button[0].but_s, all->button[0].but_r);
    } else {
        all->button[0].but_r.top = 0;
        sfSprite_setTextureRect(all->button[0].but_s, all->button[0].but_r);
    }
    if ((mouse.x >= all->button[1].pos.x
    && mouse.x <= all->button[1].pos.x + 231)
    && (mouse.y >= all->button[1].pos.y
    && mouse.y <= all->button[1].pos.y + 152)) {
        all->button[1].but_r.left = 231;
        sfSprite_setTextureRect(all->button[1].but_s, all->button[1].but_r);
    } else {
        all->button[1].but_r.left = 0;
        sfSprite_setTextureRect(all->button[1].but_s, all->button[1].but_r);
    }
}

void event_menu0p2(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(all->button[0].pos.x + 50, all->button[0].pos.y + 49,
    mouse->x, mouse->y) < 60.0) {
        all->last_scene = all->scene;
        all->scene = 1;
    }
    if ((mouse->x >= 60 && mouse->x <= 150) &&
    (mouse->y >= 50 && mouse->y <= 141)) {
        all->last_scene = all->scene;
        all->scene = 7;
    }
    if ((mouse->x >= 1766 && mouse->x <= 1857) &&
    (mouse->y >= 53 && mouse->y <= 143)) {
        all->last_scene = all->scene;
        all->scene = 2;
    }
    if ((mouse->x >= 166 && mouse->x <= 257) &&
    (mouse->y >= 52 && mouse->y <= 142)) {
        all->last_scene = all->scene;
        all->scene = 13;
    }
}

void event_menu0(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= all->button[1].pos.x
    && mouse->x <= all->button[1].pos.x + 231)
    && (mouse->y >= all->button[1].pos.y
    && mouse->y <= all->button[1].pos.y + 152)) {
        sfMusic_stop(all->music_menu.music);
        sfRenderWindow_close(all->win.window);
    }
    event_menu0p2(mouse, all);
}