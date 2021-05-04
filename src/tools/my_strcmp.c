/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** my_strcmp.c
*/

int my_strcmp(char *s1, char *s2)
{
    if (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2)
            return (*s1 - *s2);
        return (my_strcmp(s1 + 1, s2 + 1));
    }
    return (*s1 - *s2);
}
