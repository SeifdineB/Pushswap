/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** skoban
*/

#include "pushswap.h"

void do_pa(t_list **l_a, t_list **l_b)
{
    if (*l_b == NULL){
        return (0);
    }
    int pt_data = (*l_b)->data;
    t_list *new_element = malloc(sizeof(t_list));
    new_element->data = pt_data;
    new_element->next = *l_a;
    *l_a = new_element;
    *l_b = (*l_b)->next;
    my_putstr("pa ");
}

void do_pb(t_list **l_a, t_list **l_b)
{
    if (*l_a == NULL){
        return (0);
    }
    int pt_data = (*l_a)->data;
    t_list *new_element = malloc(sizeof(t_list));
    new_element->data = pt_data;
    new_element->next = *l_b;
    *l_b = new_element;
    *l_a = (*l_a)->next;
    my_putstr("pb ");
}

void do_sa(t_list **l_a)
{
    if (*l_a == NULL || (*l_a)->next == NULL) {
        return;
    }
    int temp = (*l_a)->data;
    (*l_a)->data = (*l_a)->next->data;
    (*l_a)->next->data = temp;
    my_putstr("sa ");
}
