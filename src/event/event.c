/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** even.c
*/

#include "my_defender.h"

float get_distance(int cx, int cy, int x, int y)
{
    float xdist = x - cx;
    float ydist = y - cy;

    float res = sqrtf(pow(xdist, 2) + pow(ydist, 2));
    return (res);
}

void left_button_click2(sfMouseButtonEvent *mouse, all_t *all)
{
    if (all->scene == 5)
        event_menu5(mouse, all);
    if (all->scene == 4)
        event_menu4(mouse, all);
    if (all->scene == 6)
        event_menu6(mouse, all);
}

void left_button_click(sfMouseButtonEvent *mouse, all_t *all)
{
    if (all->scene == 0)
        event_menu0(mouse, all);
    if (all->scene == 1)
        event_menu1(mouse, all);
    if (all->scene == 2)
        event_menu2(mouse, all);
    if (all->scene == 7)
        event_menu7(mouse, all);
    if (all->scene == 3)
        event_menu3(mouse, all);
    if (all->scene == 13)
        event_menu8(mouse, all);
    if (all->scene == 14)
        event_menu9(mouse, all);
    if (all->scene == 15)
        event_menu10(mouse, all);
    if (all->scene >= 8 && all->scene <= 12)
        event_overlay(mouse, all);
    left_button_click2(mouse, all);
}

void menu_event(all_t *all, sfVector2i mouse, sfMouseButtonEvent *mousevt)
{
    if (all->event.type == sfEvtClosed) {
        sfMusic_stop(all->music_menu.music);
        sfRenderWindow_close(all->win.window);
    }
    if (all->scene < 8 && all->scene != 3) {
        if (all->event.type == sfEvtKeyPressed &&
        sfKeyboard_isKeyPressed(sfKeyEscape) == 1) {
            sfMusic_stop(all->music_menu.music);
            sfRenderWindow_close(all->win.window);
        }
    } else if (all->scene >= 8 && all->scene <= 12) {
        if (all->event.type == sfEvtKeyPressed &&
        sfKeyboard_isKeyPressed(sfKeyEscape) == 1) {
            sfMusic_play(all->music_menu.music);
            all->last_scene = all->scene;
            all->scene = 3;
        }
    }
    if (all->scene == 0)
        menu0_event(all, mouse);
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        mousevt->x = mouse.x;
        mousevt->y = mouse.y;
        left_button_click(mousevt, all);
    }
}

void event(all_t *all)
{
    sfMouseButtonEvent mousevt;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->win.window);
    while (sfRenderWindow_pollEvent(all->win.window, &all->event)) {
        menu_event(all, mouse, &mousevt);
    }
}