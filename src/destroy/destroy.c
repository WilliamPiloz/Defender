/*
** EPITECH PROJECT, 2020
** Repo_Defender
** File description:
** destroy.c
*/

#include "my_defender.h"

void destroy_menu2(all_t *all)
{
    sfSprite_destroy(all->menu6.img_s);
    sfTexture_destroy(all->menu6.img_t);
    sfSprite_destroy(all->menu7.img_s);
    sfTexture_destroy(all->menu7.img_t);
    sfSprite_destroy(all->menu8.img_s);
    sfTexture_destroy(all->menu8.img_t);
    sfSprite_destroy(all->menu9.img_s);
    sfTexture_destroy(all->menu9.img_t);
    sfSprite_destroy(all->menu10.img_s);
    sfTexture_destroy(all->menu10.img_t);
    sfSprite_destroy(all->bar_life.but_s);
    sfTexture_destroy(all->bar_life.but_t);
}

void destroy_menu(all_t *all)
{
    sfSprite_destroy(all->menu0.img_s);
    sfTexture_destroy(all->menu0.img_t);
    sfSprite_destroy(all->menu1.img_s);
    sfTexture_destroy(all->menu1.img_t);
    sfSprite_destroy(all->menu2.img_s);
    sfTexture_destroy(all->menu2.img_t);
    sfSprite_destroy(all->menu3.img_s);
    sfTexture_destroy(all->menu3.img_t);
    sfSprite_destroy(all->menu4.img_s);
    sfTexture_destroy(all->menu4.img_t);
    sfSprite_destroy(all->menu5.img_s);
    sfTexture_destroy(all->menu5.img_t);
    destroy_menu2(all);
}

void destroy_background(all_t *all)
{
    sfSprite_destroy(all->menu.bg_m_s);
    sfTexture_destroy(all->menu.bg_m_t);
    sfSprite_destroy(all->menu.dark_s);
    sfTexture_destroy(all->menu.dark_t);
    sfSprite_destroy(all->map1.img_s);
    sfTexture_destroy(all->map1.img_t);
    sfSprite_destroy(all->map2.img_s);
    sfTexture_destroy(all->map2.img_t);
    sfSprite_destroy(all->map3.img_s);
    sfTexture_destroy(all->map3.img_t);
    sfSprite_destroy(all->map4.img_s);
    sfTexture_destroy(all->map4.img_t);
    sfSprite_destroy(all->mapinf.img_s);
    sfTexture_destroy(all->mapinf.img_t);
    sfSprite_destroy(all->overlay.img_s);
    sfTexture_destroy(all->overlay.img_t);
}

void destroy_text(all_t * all)
{
    sfText_destroy(all->money.text);
    sfFont_destroy(all->money.font);
    sfText_destroy(all->score.text);
    sfFont_destroy(all->score.font);
    sfText_destroy(all->sc.text);
    sfFont_destroy(all->sc.font);
}

void destroy_all(all_t *all)
{
    sfMusic_destroy(all->music_menu.music);
    destroy_background(all);
    for (int i = 0; i < 13; i += 1) {
        sfSprite_destroy(all->button[i].but_s);
        sfTexture_destroy(all->button[i].but_t);
    }
    sfSprite_destroy(all->circle.but_s);
    sfTexture_destroy(all->circle.but_t);
    sfSprite_destroy(all->star.but_s);
    sfTexture_destroy(all->star.but_t);
    destroy_text(all);
    if (all->mobs != NULL)
        list_destroy(&all->mobs);
    if (all->tower != NULL)
        list_destroy_t(&all->tower);
    destroy_menu(all);
    sfClock_destroy(all->clocks.clock);
    sfRenderWindow_destroy(all->win.window);
}