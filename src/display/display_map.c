/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Worspace)
** File description:
** display_map.c
*/

#include "my_defender.h"

void display_menu_map1(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->map1.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->overlay.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->bar_life.but_s, NULL);
    move_mobs(&all->mobs, all);
    display_mob(all);
    if (all->add_circle.add == 1 || all->add_circle.add == 2)
        set_circle(all);
    display_towers(all);
    towers_shoot(all, &all->mobs, &all->tower);
    my_int_str(all->money.array, all->money.nb);
    sfText_setString(all->money.text, all->money.array);
    sfRenderWindow_drawText(all->win.window, all->money.text, NULL);
}

void display_menu_map2(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->map2.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->overlay.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->bar_life.but_s, NULL);
    move_mobs(&all->mobs, all);
    display_mob(all);
    if (all->add_circle.add == 1 || all->add_circle.add == 2)
        set_circle(all);
    display_towers(all);
    towers_shoot(all, &all->mobs, &all->tower);
    my_int_str(all->money.array, all->money.nb);
    sfRenderWindow_drawText(all->win.window, all->money.text, NULL);
    sfText_setString(all->money.text, all->money.array);
}

void display_menu_map3(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->map3.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->overlay.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->bar_life.but_s, NULL);
    move_mobs(&all->mobs, all);
    display_mob(all);
    if (all->add_circle.add == 1 || all->add_circle.add == 2)
        set_circle(all);
    display_towers(all);
    towers_shoot(all, &all->mobs, &all->tower);
    my_int_str(all->money.array, all->money.nb);
    sfRenderWindow_drawText(all->win.window, all->money.text, NULL);
    sfText_setString(all->money.text, all->money.array);
}

void display_menu_map4(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->map4.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->overlay.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->bar_life.but_s, NULL);
    move_mobs(&all->mobs, all);
    display_mob(all);
    if (all->add_circle.add == 1 || all->add_circle.add == 2)
        set_circle(all);
    display_towers(all);
    towers_shoot(all, &all->mobs, &all->tower);
    my_int_str(all->money.array, all->money.nb);
    sfRenderWindow_drawText(all->win.window, all->money.text, NULL);
    sfText_setString(all->money.text, all->money.array);
}

void display_menu_map_inf(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->mapinf.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->overlay.img_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->bar_life.but_s, NULL);
    move_mobs(&all->mobs, all);
    display_mob(all);
    if (all->add_circle.add == 1 || all->add_circle.add == 2)
        set_circle(all);
    display_towers(all);
    towers_shoot(all, &all->mobs, &all->tower);
    my_int_str(all->score.array, all->score.nb);
    sfRenderWindow_drawText(all->win.window, all->score.text, NULL);
    sfText_setString(all->score.text, all->score.array);
    sfRenderWindow_drawText(all->win.window, all->sc.text, NULL);
    my_int_str(all->money.array, all->money.nb);
    sfRenderWindow_drawText(all->win.window, all->money.text, NULL);
    sfText_setString(all->money.text, all->money.array);
    sfRenderWindow_drawText(all->win.window, all->score.text, NULL);
}