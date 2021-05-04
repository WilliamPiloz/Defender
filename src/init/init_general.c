/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** init_general.c
*/

#include "my_defender.h"

void init_general_sprite(all_t *all)
{
    init_general(&all->menu0, "asset/menu/main_menu.png");
    init_general(&all->menu1, "asset/menu/lvl.png");
    init_general(&all->menu2, "asset/menu/setting_a.png");
    init_general(&all->menu3, "asset/menu/pause.png");
    init_general(&all->menu4, "asset/menu/win.png");
    init_general(&all->menu5, "asset/menu/loose.png");
    init_general(&all->menu6, "asset/menu/looseinf.png");
    init_general(&all->menu7, "asset/menu/help.png");
    init_general(&all->menu8, "asset/menu/bestiere.png");
    init_general(&all->menu9, "asset/menu/bestiere2.png");
    init_general(&all->menu10, "asset/menu/help2.png");
    init_general(&all->map1, "asset/maps/map1.png");
    init_general(&all->map2, "asset/maps/map2.png");
    init_general(&all->map3, "asset/maps/map3.png");
    init_general(&all->map4, "asset/maps/map4.png");
    init_general(&all->mapinf, "asset/maps/mapinf.png");
    init_general(&all->overlay, "asset/menu/overlay.png");
}