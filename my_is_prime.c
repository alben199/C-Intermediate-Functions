/*
** EPITECH PROJECT, 2022
** my_computer_square_root.c
** File description:
** EPITECH Day 05 Task06 project
*/

int my_is_prime(int nb)
{
    int a = 2;
    int p = 0;

    if (nb == 1 || nb == 0 || nb < 0) {
        return (0);
    }
    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0)
            p++;
    }
    if (p == 2)
        return (1);
    else
        return (0);
}
