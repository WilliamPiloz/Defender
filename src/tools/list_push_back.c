/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** list_push_back.c
*/

#include "my_defender.h"

void list_push_back(mobs_t **mobs, img_t img, int life)
{
    mobs_t *node = malloc(sizeof(*node));
    mobs_t *temp;

    node->coord = 0;
    node->mob = img;
    node->life = life;
    node->next = NULL;
    if ((*mobs) == NULL)
        (*mobs) = node;
    else {
        for (temp = (*mobs); temp->next != NULL; temp = temp->next);
        temp->next = node;
    }
}

void list_push_back_t(towers_t **to, img_t img, int dmg, int range)
{
    towers_t *node = malloc(sizeof(*node));
    towers_t *temp;

    node->towers = img;
    node->dmg = dmg;
    node->range = range;
    node->next = NULL;
    if ((*to) == NULL)
        (*to) = node;
    else {
        for (temp = (*to); temp->next != NULL; temp = temp->next);
        temp->next = node;
    }
}