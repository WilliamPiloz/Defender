/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** display_menu_settings.c
*/

#include "my_defender.h"

void display_menu_settings(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->menu.bg_m_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu2.img_s, NULL);
    for (int i = 2; i < 13; i += 1)
        sfRenderWindow_drawSprite(all->win.window, all->button[i].but_s,
        NULL);
}