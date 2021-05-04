/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** display_menu_bestiere.c
*/

#include "my_defender.h"

void display_menu_bestiere(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->menu.bg_m_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu8.img_s, NULL);
}

void display_menu_bestiere2(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->menu.bg_m_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu9.img_s, NULL);
}