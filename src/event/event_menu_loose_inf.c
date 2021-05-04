/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** event_menu6.c
*/

#include "my_defender.h"

void event_menu6p2(sfMouseButtonEvent *mouse, all_t *all)
{
    int tmp = 0;
    if ((mouse->x >= 1040 && mouse->x <= 1190) &&
    (mouse->y >= 840 && mouse->y <= 1000)) {
        all->life = 100;
        all->money.nb = 150;
        all->bar_life.but_r.width = 275;
        sfSprite_setTextureRect(all->bar_life.but_s, all->bar_life.but_r);
        all->score.position.x = 1750;
        all->score.position.y = 50;
        sfText_setPosition(all->score.text, all->score.position);
        sfText_setCharacterSize(all->score.text, 50);
        sfMusic_stop(all->music_menu.music);
        tmp = all->last_scene;
        all->last_scene = all->scene;
        all->scene = tmp;
        list_destroy_t(&all->tower);
        list_destroy(&all->mobs);
        init_all_mob(all);
        all->tower = NULL;
    }
}

void event_menu6(sfMouseButtonEvent *mouse, all_t *all)
{
    if ((mouse->x >= 725 && mouse->x <= 880) &&
    (mouse->y >= 850 && mouse->y <= 1000)) {
        all->life = 100;
        all->bar_life.but_r.width = 275;
        sfSprite_setTextureRect(all->bar_life.but_s, all->bar_life.but_r);
        all->score.position.x = 1750;
        all->score.position.y = 50;
        sfText_setPosition(all->score.text, all->score.position);
        sfText_setCharacterSize(all->score.text, 50);
        all->scene = 0;
        all->last_scene = 0;
        list_destroy_t(&all->tower);
        list_destroy(&all->mobs);
        all->tower = NULL;
    }
    event_menu6p2(mouse, all);
}