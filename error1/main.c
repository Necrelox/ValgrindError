/*
** EPITECH PROJECT, 2021
** All Error
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *str = malloc(sizeof(char) * 5);
    for (int i = 0; i < 6; ++i)
        str[i] = 'a' + i;
    free(str);
    return 0;
}