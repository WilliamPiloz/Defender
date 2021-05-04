/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** event_menu2.c
*/

#include "my_defender.h"

void event_menu2p5(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(820, 706, mouse->x, mouse->y) < 30) {
        if (all->button[8].but_r.width != 212) {
            all->button[8].but_r.width += 21.2;
            all->volume_music += 5;
            sfMusic_setVolume(all->music_menu.music, all->volume_music);
            if (all->button[8].but_r.width > 212)
                all->button[8].but_r.width = 212;
        }
    }
}

void event_menu2p4(sfMouseButtonEvent *mouse, all_t *all)
{
    if (get_distance(558, 707, mouse->x, mouse->y) < 30) {
        if (all->button[8].but_r.width != 0) {
            all->button[8].but_r.width -= 21.2;
            all->volume_music -= 5;
            sfMusic_setVolume(all->music_menu.music, all->volume_music);
            if (all->button[8].but_r.width < 0)
                all->button[8].but_r.width = 0;
        }
    }
    if (get_distance(818, 500, mouse->x, mouse->y) < 30) {
        if (all->button[6].but_r.width != 212) {
            all->button[6].but_r.width += 21.2;
            if (all->button[6].but_r.width > 212)
                all->button[6].but_r.width = 212;
        }
    }
    event_menu2p5(mouse, all);
}

void event_menu2p3(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 1234 && mouse->x <= 1314) &&
    (mouse->y >= 579 && mouse->y <= 659)) {
        sfRenderWindow_setFramerateLimit(all->win.window, 120);
        all->button[4].but_r.left = 90;
        if (all->fps == 30)
            all->button[2].but_r.left = 0;
        if (all->fps == 60)
            all->button[3].but_r.left = 0;
        all->fps = 120;
    }
    if (get_distance(562, 498, mouse->x, mouse->y) < 30) {
        if (all->button[6].but_r.width != 0) {
            all->button[6].but_r.width -= 21.2;
            if (all->button[6].but_r.width < 0)
                all->button[6].but_r.width = 0;
        }
    }
    event_menu2p4(mouse, all);
}

void event_menu2p2(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 991 && mouse->x <= 1077) &&
    (mouse->y >= 579 && mouse->y <= 664)) {
        sfRenderWindow_setFramerateLimit(all->win.window, 30);
        all->button[2].but_r.left = 90;
        if (all->fps == 60)
            all->button[3].but_r.left = 0;
        if (all->fps == 120)
            all->button[4].but_r.left = 0;
        all->fps = 30;
    }
    if ((mouse->x >= 1118 && mouse->x <= 1201) &&
    (mouse->y >= 579 && mouse->y <= 659)) {
        sfRenderWindow_setFramerateLimit(all->win.window, 60);
        all->button[3].but_r.left = 90;
        if (all->fps == 30) all->button[2].but_r.left = 0;
        if (all->fps == 120)
            all->button[4].but_r.left = 0;
        all->fps = 60;
    }
    event_menu2p3(mouse, all);
}

void event_menu2(sfMouseButtonEvent *mouse, all_t *all)
{
    int tmp = 0;
    if (get_distance(1380, 262, mouse->x, mouse->y) < 46) {
        if (all->scene_tmp == 1) {
            all->scene = 3;
            all->scene_tmp = 0;
        } else {
            tmp = all->scene;
            all->scene = all->last_scene;
            all->last_scene = tmp;
        }
    }
    event_menu2p2(mouse, all);
    for (int i = 0; i < 13; i += 1)
        sfSprite_setTextureRect(all->button[i].but_s, all->button[i].but_r);
}