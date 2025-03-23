/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main function
*/

#include "../include/transfer.h"

//main function
int main(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") != 0 || ac == 1)
        return 84;
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        usage();
    if (error(ac, av) == 84)
        return 84;
    if (ac > 2)
        if (print_result(ac, av) == 84)
            return 84;
    return 0;
}
