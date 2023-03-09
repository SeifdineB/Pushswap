/*
** EPITECH PROJECT, 2022
** dd
** File description:
** dd
*/

int my_strlen(char *c)
{
    int p = 0;
    while (c[p] != '\0') {
        p = p + 1;
    }
    return p;
}

char *my_strcat(char *dest, char const *src)
{
    int p = my_strlen(dest);
    int j = my_strlen(src);
    int i = 0;

    for (i = p; i < p + j; i = i + 1) {
        dest[i] = src[i - p];
    }
    dest[p + j + 1] = '\0';
    return dest;
}
