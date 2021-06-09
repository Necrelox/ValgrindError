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
    for (int i = 0; i < 5; ++i)
        str[i] = 'a' + i;
    printf("%s\n", str);
    free(str);
    return 0;
}