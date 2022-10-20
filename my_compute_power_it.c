/*
** EPITECH PROJECT, 2022
** my_compute_power_it.c
** File description:
** EPITECH Day 05 Task03 project
*/

int my_compute_power_it(int nb, int p)
{
    int squr = 1;

    if (p == 0 || (nb == 0 && p == 0))
        return (1);

    else if (p < 0)
        return (0);

    for (int i = 1 ; i <= p; i++){
        squr *= nb;
    }
    return (squr);
}
