/*
** EPITECH PROJECT, 2020
** B-MUL-200-MPL-2-1-mydefender-yanis.labchiri
** File description:
** int_to_str.c
*/

#include "my_defender.h"

void my_int_str(char *str, int nb)
{
    int i = 0;
    int p = 0;
    int m[5] = {10000, 1000, 100, 10, 1};
    while (p < 5) {
        if (nb / m[p] >= 0) {
            str[i] = ((nb / m[p]) + 48);
            nb = nb - (nb / m[p]) * m[p];
            i += 1;
        }
        p++;
    }
    str[i] = '\0';
}