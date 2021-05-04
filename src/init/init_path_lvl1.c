/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** init_path.c
*/

#include "my_defender.h"

void init_path1_2(all_t *all)
{
    all->pmap1.coordinate[7][0] = 1230;
    all->pmap1.coordinate[7][1] = 580;
    all->pmap1.coordinate[8][0] = 1090;
    all->pmap1.coordinate[8][1] = 475;
    all->pmap1.coordinate[9][0] = 770;
    all->pmap1.coordinate[9][1] = 475;
    all->pmap1.coordinate[10][0] = 660;
    all->pmap1.coordinate[10][1] = 400;
    all->pmap1.coordinate[11][0] = 660;
    all->pmap1.coordinate[11][1] = 230;
    all->pmap1.coordinate[12][0] = 780;
    all->pmap1.coordinate[12][1] = 150;
    all->pmap1.coordinate[13][0] = 1940;
    all->pmap1.coordinate[13][1] = 150;
}

void init_path1(all_t *all)
{
    all->pmap1.coordinate[0][0] = 275;
    all->pmap1.coordinate[0][1] = 740;
    all->pmap1.coordinate[1][0] = 395;
    all->pmap1.coordinate[1][1] = 815;
    all->pmap1.coordinate[2][0] = 450;
    all->pmap1.coordinate[2][1] = 770;
    all->pmap1.coordinate[3][0] = 660;
    all->pmap1.coordinate[3][1] = 780;
    all->pmap1.coordinate[4][0] = 680;
    all->pmap1.coordinate[4][1] = 815;
    all->pmap1.coordinate[5][0] = 1090;
    all->pmap1.coordinate[5][1] = 815;
    all->pmap1.coordinate[6][0] = 1230;
    all->pmap1.coordinate[6][1] = 730;
    init_path1_2(all);
}

void init_path(all_t *all)
{
    init_path1(all);
    init_path2(all);
    init_path3(all);
    init_path4(all);
    init_pathinf(all);
}