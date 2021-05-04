/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** display_menu_level.c
*/

#include "my_defender.h"

void display_menu_lvl(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->menu.bg_m_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu1.img_s, NULL);
}