/*
** EPITECH PROJECT, 2021
** All Error
** File description:
** main
*/

#include <stdlib.h>

int main(void)  
{
    char *str = malloc(sizeof(char) * 2);
    free(str);
    free(str);
    return 0;
}