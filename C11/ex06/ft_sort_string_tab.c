/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crypto <crypto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:30:19 by crypto            #+#    #+#             */
/*   Updated: 2022/09/15 08:40:59 by crypto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i])
        i++;
    return (s1[i] - s2[i]);
}

void    ft_sort_string_tab(char **tab)
{
    int     i;
    char    *aux;

    if (tab == NULL || tab[0] == NULL)
        return ;
    i = 0;
    while (tab[i + 1] != NULL)
    {
        if (ft_strcmp(tab[i], tab[i + 1]) > 0)
        {
            aux = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = aux;
            i = 0;
        }
        else
            i++;
    }
}
/* 
void ft_print(char **argv)
{
    for(int i = 0; argv[i] != NULL; i++)
        printf("%s\n", argv[i]);
}

int main(int argc, char **argv)
{
    (void)argc;
    ft_print(argv);
    ft_sort_string_tab(argv);
    printf("----------------------------\n");
    ft_print(argv);
} */