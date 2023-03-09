/*
** EPITECH PROJECT, 2022
** sortedlist
** File description:
** sortedlist
*/

#include "pushswap.h"

int check_already_sorted_list(t_list **l_a, t_list **l_b)
{
    t_list *pt_to_la = *l_a;
    while (pt_to_la->next) {
        if (pt_to_la->data > pt_to_la->next->data) {
        swap_list(l_a, l_b);
    }
    pt_to_la = pt_to_la->next;
    }
}
