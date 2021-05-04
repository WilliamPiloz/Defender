/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** init_button.c
*/

#include "my_defender.h"

void init_button_sprite2(all_t *all)
{
    init_button(&all->button[8], "asset/button/bar.png",
    set_rec(586, 687, 35, 212));
    init_button(&all->button[9], "asset/button/less.png",
    set_rec(532, 468, 60, 60));
    init_button(&all->button[10], "asset/button/plus.png",
    set_rec(788, 470, 60, 60));
    init_button(&all->button[11], "asset/button/less.png",
    set_rec(528, 677, 60, 60));
    init_button(&all->button[12], "asset/button/plus.png",
    set_rec(790, 676, 60, 60));
    init_button(&all->circle, "asset/towers/circle.png",
    set_rec(0, 0, 206, 231));
    init_button(&all->bar_life, "asset/button/bar_r.png",
    set_rec(145, 55, 22, 275));
    init_button(&all->star, "asset/star.png",
    set_rec(740, 320, 238, 432));
}

void init_button_sprite(all_t *all)
{
    init_button(&all->button[0], "asset/button/play_b.png",
    set_rec(900, 480, 120, 120));
    init_button(&all->button[1], "asset/button/exit_b.png",
    set_rec(850, 680, 152, 231));
    init_button(&all->button[2], "asset/button/30.png",
    set_rec(1000, 579, 90, 89));
    init_button(&all->button[3], "asset/button/60.png",
    set_rec(1118, 579, 90, 89));
    all->button[3].but_r.left = 90;
    sfSprite_setTextureRect(all->button[3].but_s, all->button[3].but_r);
    init_button(&all->button[4], "asset/button/120.png",
    set_rec(1234, 579, 90, 89));
    init_button(&all->button[5], "asset/button/bar_bg.png",
    set_rec(536, 468, 66, 315));
    init_button(&all->button[6], "asset/button/bar.png",
    set_rec(582, 477, 35, 212));
    init_button(&all->button[7], "asset/button/bar_bg.png",
    set_rec(528, 677, 66, 315));
    init_button_sprite2(all);
}