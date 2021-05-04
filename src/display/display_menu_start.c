/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** display_menu_start.c
*/

#include "my_defender.h"

void display_menu_start(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->menu.bg_m_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu.dark_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu0.img_s, NULL);
    for (int i = 0; i < 2; i += 1)
        sfRenderWindow_drawSprite(all->win.window, all->button[i].but_s, NULL);
}