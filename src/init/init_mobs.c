/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** init_mobs.c
*/

#include "my_defender.h"

img_t init_mobs(char *path, img_size_t size)
{
    img_t mob;
    sfVector2f post;
    post.x = size.width / 2;
    post.y = size.height / 2;
    mob.pos.x = size.x;
    mob.pos.y = size.y;
    mob.img_r.left = 0;
    mob.img_r.top = 0;
    mob.img_r.height = size.height;
    mob.img_r.width = size.width;
    mob.img_t = sfTexture_createFromFile(path, NULL);
    mob.img_s = sfSprite_create();
    sfTexture_setRepeated(mob.img_t, sfTrue);
    sfSprite_setTexture(mob.img_s, mob.img_t, sfTrue);
    sfSprite_setTextureRect(mob.img_s, mob.img_r);
    sfSprite_setOrigin(mob.img_s, post);
    sfSprite_setPosition(mob.img_s, mob.pos);
    return (mob);
}

int five_rand(void)
{
    int nb = (rand() % (75 - 125) + 75);
    while (nb % 5 != 0) {
        nb = (rand() % (75 - 125) + 75);
    }
    return (nb);
}

void init_all_mob2(all_t *all)
{
    if (all->scene == 11) {
        for (int i = 0; i < 60; i += 1) {
            list_push_back(&(all->mobs), init_mobs("asset/mobs/mob1_b.png",
            set_rec(0 - (i * five_rand()), 850, 100, 119)), 150 + (i * 2));
        }
    }
    if (all->scene == 12) {
        for (int i = 0; i < 50; i += 1) {
            list_push_back(&(all->mobs), init_mobs("asset/mobs/mob1_b.png",
            set_rec(0 - (i * five_rand()), 350, 100, 119)), 150 + (i * 2));
        }
    }
}

void init_all_mob(all_t *all)
{
    all->mobs = NULL;
    if (all->scene == 8) {
        for (int i = 0; i < 30; i += 1) {
            list_push_back(&(all->mobs), init_mobs("asset/mobs/mob1_b.png",
            set_rec(0 - (i * five_rand()), 740, 100, 119)), 150 + (i * 2));
        }
    }
    if (all->scene == 9) {
        for (int i = 0; i < 40; i += 1) {
            list_push_back(&(all->mobs), init_mobs("asset/mobs/mob1_b.png",
            set_rec(0 - (i * five_rand()), 815, 100, 119)), 150 + (i * 2));
        }
    }
    if (all->scene == 10) {
        for (int i = 0; i < 50; i += 1) {
            list_push_back(&(all->mobs), init_mobs("asset/mobs/mob1_b.png",
            set_rec(760, 1080 + (i * five_rand()), 100, 119)), 150 + (i * 2));
        }
    }
    init_all_mob2(all);
}