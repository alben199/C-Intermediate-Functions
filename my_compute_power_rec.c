/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** EPITECH Day 05 Task04project
*/
int my_compute_power_rec(int nb, int p)
{
    if (p == 0 || (nb == 0 && p == 0))
        return (1);

    else if (p < 0)
        return (0);
    else
        return (nb * my_compute_power_rec(nb, p - 1));
}
