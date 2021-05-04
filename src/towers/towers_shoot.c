/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** towers_shoot.c
*/

#include "my_defender.h"

void check_final(all_t *all, mobs_t *tmp)
{
    for (; tmp != NULL; tmp = tmp->next) {
        if (tmp->mob.pos.x != 2000)
            return;
    }
    all->money.nb = 100;
    sfMusic_play(all->music_menu.music);
    all->last_scene = all->scene;
    all->scene = 4;
    if (all->life >= 30)
        all->star.but_r.left += 432;
    if (all->life >= 80)
        all->star.but_r.left += 432;
}

void shoot_loop(all_t *all, towers_t *tow, mobs_t *mob)
{
    int i = 0;
    while (mob) {
        if (mob->life <= 0 && mob->mob.pos.x != 2000) {
            if (all->scene == 12) {
                mob->life = 400;
                mob->mob.pos.x = -100;
                mob->mob.pos.y = 350;
                mob->coord = 0;
                all->money.nb += 10;
                all->score.nb += 1;
            } else {
                mob->mob.pos.x = 2000;
                sfSprite_setPosition(mob->mob.img_s, mob->mob.pos);
                all->money.nb += 10;
            }
        } else if (get_distance(
        tow->towers.pos.x, tow->towers.pos.y, mob->mob.pos.x, mob->mob.pos.y)
        < tow->range) {
            mob->life -= tow->dmg;
            if (tow->dmg == 4 || tow->dmg == 5)
                return;
        }
        if (mob == NULL)
            break;
        mob = mob->next;
        i += 1;
    }
}

void towers_shoot(all_t *all, mobs_t **mobs, towers_t **tower)
{
    towers_t *tow = *tower;
    mobs_t *mob = *mobs;
    mobs_t *tmp = *mobs;

    while (tow) {
        mob = (*mobs);
        shoot_loop(all, tow, mob);
        tow = tow->next;
    }
    check_final(all, tmp);
}