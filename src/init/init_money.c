/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** init_money.c
*/

#include "my_defender.h"

void init_money(all_t *all)
{
    all->money.array[0] = '0';
    all->money.array[1] = '\0';
    all->money.nb = 0;
    all->money.font = sfFont_createFromFile("asset/arial.ttf");
    all->money.text = sfText_create();
    sfText_setString(all->money.text, all->money.array);
    sfText_setFont(all->money.text, all->money.font);
    sfText_setCharacterSize(all->money.text, 50);
    sfText_setColor(all->money.text, sfWhite);
    sfText_setOutlineColor(all->money.text, sfBlack);
    sfText_setOutlineThickness(all->money.text, 1);
    all->money.position.x = 150;
    all->money.position.y = 100;
    sfText_setPosition(all->money.text, all->money.position);
}

void init_score(all_t *all)
{
    all->score.array[0] = '0';
    all->score.array[1] = '\0';
    all->score.nb = 0;
    all->score.font = sfFont_createFromFile("asset/arial.ttf");
    all->score.text = sfText_create();
    sfText_setString(all->score.text, all->score.array);
    sfText_setFont(all->score.text, all->score.font);
    sfText_setCharacterSize(all->score.text, 50);
    sfText_setColor(all->score.text, sfWhite);
    sfText_setOutlineColor(all->score.text, sfBlack);
    sfText_setOutlineThickness(all->score.text, 1);
    all->score.position.x = 1750;
    all->score.position.y = 50;
    sfText_setPosition(all->score.text, all->score.position);
}

void init_sc(all_t *all)
{
    all->sc.array[0] = 'S';
    all->sc.array[1] = 'c';
    all->sc.array[2] = 'o';
    all->sc.array[3] = 'r';
    all->sc.array[4] = 'e';
    all->sc.array[5] = ':';
    all->sc.array[6] = '\0';
    all->sc.font = sfFont_createFromFile("asset/arial.ttf");
    all->sc.text = sfText_create();
    sfText_setString(all->sc.text, all->sc.array);
    sfText_setFont(all->sc.text, all->sc.font);
    sfText_setCharacterSize(all->sc.text, 50);
    sfText_setColor(all->sc.text, sfWhite);
    sfText_setOutlineColor(all->sc.text, sfBlack);
    sfText_setOutlineThickness(all->sc.text, 1);
    all->sc.position.x = 1600;
    all->sc.position.y = 48;
    sfText_setPosition(all->sc.text, all->sc.position);
}