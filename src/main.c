/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "pushswap.h"

void switch_str_to_int(int argc, char** argv, t_list** list_a, t_list** list_b)
{
    for (int i = 1; i < argc; i++) {
        int data = my_getnbr(argv[i]);
        *list_a = create_list_start(*list_a, data);
    }
}

int main(int argc, char **argv)
{
    t_list *list_a = NULL;
    t_list *list_b = NULL;
    switch_str_to_int(argc, argv, &list_a, &list_b);
    check_already_sorted_list(&list_a, &list_b);
    my_putchar('\n');
    return (0);
}
