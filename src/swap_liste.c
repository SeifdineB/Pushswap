/*
** EPITECH PROJECT, 2022
** swap_loiste
** File description:
** swap_liste
*/

#include "pushswap.h"

bool check_if_next_is_sup(t_list **l_a, t_list *pointer, bool list_modified)
{
    if (pointer->data > pointer->next->data) {
        do_sa(l_a);
        list_modified = true;
    }
    return list_modified;
}

void swap_list(t_list **l_a, t_list **l_b)
{
    bool list_modified = true;
    while (list_modified) {
        list_modified = false;
        t_list *pointer = *l_a;
        while (pointer->next != NULL) {
            list_modified = check_if_next_is_sup(l_a, pointer, list_modified);
            do_pb(l_a, l_b);
            pointer = pointer->next;
        }
        while (*l_b != NULL) {
            do_pa(l_a, l_b);
        }
    }
}
