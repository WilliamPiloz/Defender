/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** main.c
*/

#include "my_defender.h"

int main(int ac, char **av)
{
    ((void) av);
    if (ac != 1)
        return (84);
    srand(time(NULL));
    all_t all;
    all.life = 100;
    all.scene = 0;
    all.fps = 60;
    init(&all);
    all.clocks.clock = sfClock_create();
    while (sfRenderWindow_isOpen(all.win.window)) {
        all.clocks.time = sfClock_getElapsedTime(all.clocks.clock);
        all.clocks.sec = all.clocks.time.microseconds / 1000000.0;
        event(&all);
        if (all.clocks.sec > 0.008)
            display(&all);
    }
    destroy_all(&all);
    return (0);
}