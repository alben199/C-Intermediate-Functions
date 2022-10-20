/*
** EPITECH PROJECT, 2022
** my_factorial_rec.c
** File description:
** EPITECH Day 05 Task01 project
*/
int my_compute_factorial_rec(int nb)
{
    int result;

    if (nb <= 1 && nb >= 0)
        return (1);

    if (nb < 0)
        return (0);

    else if (nb > 12)
        return (0);

    else
        return (nb * my_compute_factorial_rec(nb - 1));
}
