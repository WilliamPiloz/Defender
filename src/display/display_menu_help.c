/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** display_menu_help.c
*/

#include "my_defender.h"

void display_menu_help2(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->menu.bg_m_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu10.img_s, NULL);
}

void display_menu_help(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->menu.bg_m_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu7.img_s, NULL);
}