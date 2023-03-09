/*
** EPITECH PROJECT, 2022
** newnode_1
** File description:
** newnode_1
*/

#include "pushswap.h"

t_list *create_list_start(t_list *list, int pt_data)
{
    t_list *nouvelle_liste = malloc(sizeof(t_list));
    nouvelle_liste->data = pt_data;
    nouvelle_liste->next = NULL;
    if (list == NULL) {
        return nouvelle_liste;
    } else {
        t_list *temp = list;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nouvelle_liste;
        return list;
    }
}
