/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** free_list.c
*/

#include "my_defender.h"

void list_destroy(mobs_t **mobs)
{
    mobs_t *node = (*mobs);

    if (node == NULL)
        return;
    while (node != NULL) {
        sfTexture_destroy(node->mob.img_t);
        sfSprite_destroy(node->mob.img_s);
        node = (*mobs)->next;
        free(*mobs);
        (*mobs) = node;
    }
}

void list_destroy_t(towers_t **tower)
{
    towers_t *node = (*tower);

    if (node == NULL)
        return;
    while (node != NULL) {
        sfSprite_destroy(node->towers.img_s);
        sfTexture_destroy(node->towers.img_t);
        node = (*tower)->next;
        free(*tower);
        (*tower) = node;
    }
}