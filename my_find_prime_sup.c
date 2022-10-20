/*
** EPITECH PROJECT, 2022
** my_computer_square_root.c
** File description:
** EPITECH Day 05 Task06 project
*/
int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb))
        return nb;
    while (!my_is_prime(nb))
        nb++;
    return nb;
}
