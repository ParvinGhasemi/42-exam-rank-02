/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 01:36:19 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/23 01:47:05 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strrev(char *str)
{
    char    temp;
    int     i;
    int     end;

    if (str == NULL)
        return (NULL);
    end = 0;
    while (str[end] != '\0')
    {
        end++;
    }
    end--;
    i = 0;
    while (i < end)
    {
        temp = str[i];
        str[i] = str[end];
        str[end] = temp;
        i++;
        end--;
    }
    return (str); 
}

/* 
#include <stdio.h>

int	main(void)
{
	char	str[] = "hello !321";

	printf("%s\n", ft_strrev(str));
	return (0);
}
*/
