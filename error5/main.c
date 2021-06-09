/*
** EPITECH PROJECT, 2021
** All Error
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>

int main(void)  
{
    char *str = malloc(sizeof(char) * 2);
    write(1, str, 3);
    free(str);
    return 0;
}