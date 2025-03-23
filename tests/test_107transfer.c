/*
** EPITECH PROJECT, 2024
** units tests 107transfer
** File description:
** 107 transfer
*/

#include <criterion/criterion.h>
#include "../include/transfer.h"

Test(test_transfer, error)
{
    char *av[] = {"./a.out", "0*1*2*a*4", "1"};
    int i = error(3, av);
    cr_assert_eq(i, 84);
}

Test(test_transfer6, error)
{
    char *av[] = {"./a.out", "0*1*2*3*4", "1"};
    int i = error(3, av);
    cr_assert_eq(i, 0);
}

Test(test_transfer1, hormer_nxt)
{
    hormer_nxt(0, 6, 6);
}

Test(test_transfer2, calc)
{
    char *av[] = {"0*1*2*3*4", "1"};
    calc(av, 6, 1);
}

Test(test_transfer3, print_result)
{
    char *av[] = {"./a.out", "0*1*2*3*4", "1"};
    print_result(3, av);
}

Test(test_transfer4, print_result)
{
    char *av[] = {"./a.out", "0*0*9", "1*3*5", "2*4*6", "8*8*8"};
    print_result(5, av);
}

Test(test_transfer7, print_result)
{
    char *av[] = {"./a.out", "0*1*2*3*-4", "1"};
    print_result(3, av);
}

Test(test_transfer9, print_result)
{
    char *av[] = {"./a.out", "0*1*2**3*-4", "1"};
    print_result(3, av);
}

Test(test_transfer8, print_result)
{
    char *av[] = {"./a.out", "0*0*9", "1*3*-5", "2*4*6", "8*8*8"};
    print_result(5, av);
}

Test(test_transfer5, usage)
{
    usage();
}
