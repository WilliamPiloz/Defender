/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** putchar
*/

#include "my_defender.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
