/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** display_menu_win.c
*/

#include "my_defender.h"

void display_menu_win(all_t *all)
{
    sfRenderWindow_drawSprite(all->win.window, all->menu.bg_m_s, NULL);
    sfRenderWindow_drawSprite(all->win.window, all->menu4.img_s, NULL);
    sfSprite_setTextureRect(all->star.but_s, all->star.but_r);
    sfRenderWindow_drawSprite(all->win.window, all->star.but_s, NULL);
}