/*
** EPITECH PROJECT, 2022
** my_computer_factorial_it.c
** File description:
** EPITECH Day 05 Task01 project
*/

int my_compute_factorial_it(int nb)
{
    int fact = 1;

    if (nb > 12)
        return (0);

    if (nb == 0)
        return (1);

    else if (nb < 0)
        return (0);

    for (int i = 1 ; i <= nb; i++){
        fact *= i;
    }
    return (fact);
}
