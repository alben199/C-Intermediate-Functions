/*
** EPITECH PROJECT, 2022
** my_computer_square_root.c
** File description:
** EPITECH Day 05 Task05 project
*/

int my_compute_square_root(int nb)
{
    int squr = 1;
    if (nb < 0)
        return (0);
    while (squr <= nb){
        if (squr * squr == nb)
            return (squr);
        squr++;
    }
    return (0);
}
