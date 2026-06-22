/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 01:27:22 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/23 01:32:59 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *str)
{
    char    *dup;
    int     i;

    i = 0;
    while (str[i])
        i++;
    dup = (char *)malloc(sizeof(char) * (i + 1));
    if (!dup)
        return (NULL);
    i = 0;
    while (str[i] != '\0')
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
