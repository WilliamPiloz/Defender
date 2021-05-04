/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** display_menu_loose.c
*/

#include "my_defender.h"

void display_menu_loose(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->menu.bg_m_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu5.img_s, NULL);
}