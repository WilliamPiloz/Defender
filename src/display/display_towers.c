/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** display_towers.c
*/

#include "my_defender.h"

void display_towers(all_t *all)
{
    towers_t *towers = all->tower;

    for (; towers != NULL; towers = towers->next)
        sfRenderWindow_drawSprite(all->win.window, towers->towers.img_s, NULL);
}