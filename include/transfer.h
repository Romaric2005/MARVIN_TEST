/*
** EPITECH PROJECT, 2024
** transfer.h
** File description:
** header file
*/

#ifndef TRANSFER_H
    #define TRANSFER_H
    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>

void usage(void);
double hormer_nxt(double prev_t, int nextcoef, double x);
int error(int ac, char **av);
double calc(char **av, double x, int j);
int print_result(int ac, char **av);

#endif
