/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** move_mobs.c
*/

#include "my_defender.h"

void move_mobs4(mobs_t **tmp, all_t *all)
{
    if ((*tmp)->mob.pos.x < all->pmap.coordinate[(*tmp)->coord][0] &&
    (*tmp)->mob.pos.y < all->pmap.coordinate[(*tmp)->coord][1]) {
        (*tmp)->mob.pos.x += 5;
        (*tmp)->mob.pos.y += 5;
        (*tmp)->mob.img_r.left += 119;
    }
    if ((*tmp)->mob.pos.x > all->pmap.coordinate[(*tmp)->coord][0] &&
    (*tmp)->mob.pos.y > all->pmap.coordinate[(*tmp)->coord][1]) {
        (*tmp)->mob.pos.x -= 5;
        (*tmp)->mob.pos.y -= 5;
        (*tmp)->mob.img_r.left += 119;
    }
}

void move_mobs3(mobs_t **tmp, all_t *all)
{
    if ((*tmp)->mob.pos.y < all->pmap.coordinate[(*tmp)->coord][1] &&
    (*tmp)->mob.pos.x == all->pmap.coordinate[(*tmp)->coord][0]) {
        (*tmp)->mob.pos .y += 5;
        (*tmp)->mob.img_r.left += 119;
    }
    if ((*tmp)->mob.pos.x > all->pmap.coordinate[(*tmp)->coord][0] &&
    (*tmp)->mob.pos.y < all->pmap.coordinate[(*tmp)->coord][1]) {
        (*tmp)->mob.pos.x -= 5;
        (*tmp)->mob.pos.y += 5;
        (*tmp)->mob.img_r.left += 119;
    }
    if ((*tmp)->mob.pos.x < all->pmap.coordinate[(*tmp)->coord][0] &&
    (*tmp)->mob.pos.y > all->pmap.coordinate[(*tmp)->coord][1]) {
        (*tmp)->mob.pos.x += 5;
        (*tmp)->mob.pos.y -= 5;
        (*tmp)->mob.img_r.left += 119;
    }
    move_mobs4(tmp, all);
}

void move_mobs2(mobs_t **tmp, all_t *all)
{
    if ((*tmp)->mob.pos.x == all->pmap.coordinate[(*tmp)->coord][0] &&
    (*tmp)->mob.pos.y == all->pmap.coordinate[(*tmp)->coord][1])
        (*tmp)->coord += 1;
    if ((*tmp)->mob.pos.x > all->pmap.coordinate[(*tmp)->coord][0] &&
    (*tmp)->mob.pos.y == all->pmap.coordinate[(*tmp)->coord][1]) {
        (*tmp)->mob.pos.x -= 5;
        (*tmp)->mob.img_r.left += 119;
    }
    if ((*tmp)->mob.pos.x < all->pmap.coordinate[(*tmp)->coord][0] &&
    (*tmp)->mob.pos.y == all->pmap.coordinate[(*tmp)->coord][1]) {
        (*tmp)->mob.pos.x += 5;
        (*tmp)->mob.img_r.left += 119;
    }
    if ((*tmp)->mob.pos.y > all->pmap.coordinate[(*tmp)->coord][1] &&
    (*tmp)->mob.pos.x == all->pmap.coordinate[(*tmp)->coord][0]) {
        (*tmp)->mob.pos.y -= 5;
        (*tmp)->mob.img_r.left += 119;
    }
    move_mobs3(tmp, all);
}

void move_mobsp1(mobs_t **tmp, all_t *all)
{
    if (all->scene == 12) {
        (*tmp)->life = 400;
        (*tmp)->mob.pos.x = -100;
        (*tmp)->mob.pos.y = 350;
        (*tmp)->coord = 0;
        all->life -= 5;
        all->bar_life.but_r.width -= 13.75;
        sfSprite_setTextureRect
        (all->bar_life.but_s, all->bar_life.but_r);
    } else {
        (*tmp)->mob.pos.x = 2000;
        sfSprite_setPosition((*tmp)->mob.img_s, (*tmp)->mob.pos);
        all->life -= 5;
        all->bar_life.but_r.width -= 13.75;
        sfSprite_setTextureRect
        (all->bar_life.but_s, all->bar_life.but_r);
    }
}

void move_mobs(mobs_t **mobs, all_t *all)
{
    mobs_t *tmp = *mobs;
    int i = 0;
    if (tmp == NULL)
        return;
    while (tmp) {
        if ((((tmp->mob.pos.x >= 1940 && tmp->mob.pos.x <= 1980)
        || tmp->mob.pos.y >= 1100) && all->scene != 10)
        || (tmp->mob.pos.x >= 1940 && all->scene == 10)) {
            move_mobsp1(&tmp, all);
        } else if (tmp->mob.pos.x != 2000){
            move_mobs2(&tmp, all);
            sfSprite_setTextureRect(tmp->mob.img_s, tmp->mob.img_r);
            sfSprite_setPosition(tmp->mob.img_s, tmp->mob.pos);
        }
        if (tmp == NULL)
            break;
        tmp = tmp->next;
        i += 1;
    }
}