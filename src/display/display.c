/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** display.c
*/

#include "my_defender.h"

void display_mob(all_t *all)
{
    mobs_t *tmp = all->mobs;

    while (tmp) {
        sfRenderWindow_drawSprite(all->win.window, tmp->mob.img_s, NULL);
        tmp = tmp->next;
    }
}

void check_scene2(all_t *all)
{
    if (all->scene == 8)
        display_menu_map1(all);
    if (all->scene == 9)
        display_menu_map2(all);
    if (all->scene == 10)
        display_menu_map3(all);
    if (all->scene == 11)
        display_menu_map4(all);
    if (all->scene == 12)
        display_menu_map_inf(all);
    if (all->scene == 13)
        display_menu_bestiere(all);
    if (all->scene == 14)
        display_menu_bestiere2(all);
    if (all->scene == 15)
        display_menu_help2(all);
}

void check_scene(all_t *all)
{
    if (all->scene == 0)
        display_menu_start(all);
    if (all->scene == 1)
        display_menu_lvl(all);
    if (all->scene == 2)
        display_menu_settings(all);
    if (all->scene == 3)
        display_menu_pause(all);
    if (all->scene == 4)
        display_menu_win(all);
    if (all->scene == 5)
        display_menu_loose(all);
    if (all->scene == 6)
        display_menu_loose_inf(all);
    if (all->scene == 7)
        display_menu_help(all);
    check_scene2(all);
}

void display(all_t *all)
{
    sfRenderWindow_clear(all->win.window, sfBlack);
    if (all->life <= 0 && all->scene == 12) {
        all->score.position.x = 830;
        all->score.position.y = 455;
        sfText_setPosition(all->score.text, all->score.position);
        sfText_setCharacterSize(all->score.text, 100);
        all->last_scene = all->scene;
        all->scene = 6;
    } else if (all->life <= 0 && (all->scene >= 8 && all->scene <= 11)) {
        all->last_scene = all->scene;
        all->scene = 5;
    }
    check_scene(all);
    sfRenderWindow_display(all->win.window);
    sfClock_restart(all->clocks.clock);
    sfRenderWindow_display(all->win.window);
}