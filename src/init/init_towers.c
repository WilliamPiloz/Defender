/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** init_towers.c
*/

#include "my_defender.h"

img_t init_towers(char *path, img_size_t size)
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