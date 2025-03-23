/*
** EPITECH PROJECT, 2024
** 107transfer.c
** File description:
** project 107 transfer
*/

#include "../include/transfer.h"

//error cases
int error(int ac, char **av)
{
    if (ac % 2 == 0)
        return 84;
    for (int i = 1; i < ac; i++) {
        if (av[i][0] == '*' || av[i][strlen(av[i]) - 1] == '*' || av[i][strlen(av[i]) - 1] == '-')
            return 84;
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (!(av[i][j] >= '0' && av[i][j] <= '9') && av[i][j] != '*' && av[i][j] != '-')
                return 84;
            if (av[i][j] == '*' && av[i][j + 1] == '*')
                return 84;
            if (av[i][j] == '-' && av[i][j + 1] == '*' || av[i][j] == '-' && av[i][j + 1] == '-')
                return 84;
        }
    }
    return 0;
}

//usage
void usage(void)
{
    printf("USAGE\n");
    printf("    ./107transfer [num den]+\n");
    printf("DESCRIPTION\n");
    printf("    num    polynomial numerator defined by its coefficients\n");
    printf("    den    polynomial denominator defined by its coefficients\n");
}

//project calculator functions
double hormer_nxt(double prev_t, int nextcoef, double x)
{
    return prev_t * x + nextcoef;
}

double calc(char **av, double x, int j)
{
    double k = 0;

    for (int i = strlen(av[j]) - 1; i >= 0; i-=2) {
        if (av[j][i - 1] == '-')
            i--;
        k = hormer_nxt(k, atoi(&av[j][i]), x);
    }
    return k;
}

int print_result(int ac, char **av)
{
    double k = 1;

    for (double x = 0; x < 1.001; x += 0.001) {
        for (int i = 1; i < ac; i += 2) {
            if (calc(av, x, i + 1) == 0)
                return 84;
            k *= calc(av, x, i) / calc(av, x, i + 1);
        }
        printf("%.3f -> %.5f\n", x, k);
        k = 1;
    }
}
