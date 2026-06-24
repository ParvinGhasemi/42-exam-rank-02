/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 05:42:46 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 05:50:50 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int count;

    count = 0;
    while (begin_list)
    {
        count++;
        begin_list = begin_list->next;
    }
    return (count);
}
/* 
#include <stdio.h>
int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	printf("%d\n", ft_list_size(&a)); // 3
	return (0);
}
 */
 