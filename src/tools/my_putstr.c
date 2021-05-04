/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** one-by-one
*/

#include "my_defender.h"

void my_putchar(char);

int my_putstr(char const *str)
{
    int i = 0;
    int n = 0;
    for (n = 0; str[n]; n = n + 1);
    for (i = 0; i < n; i = i + 1) {
        my_putchar(str [i]);
    }
    return (0);
}
