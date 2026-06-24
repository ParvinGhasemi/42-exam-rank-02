/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 05:52:55 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 06:11:55 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *arr;
    int len;
    int i;

    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;
    arr = (int *)malloc(sizeof(int) * len);
    if (!arr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        if (start <= end)
            arr[i] = start + i;
        else
            arr[i] = start - i;
        i++;
    }
    return (arr);
}
/* 
#include <stdio.h>
void	test(int start, int end)
{
	int	*arr;
	int	len;
	int	i;

	len = end - start;
	if (len < 0)
		len = -len;
	len++;
	arr = ft_range(start, end);
	i = 0;
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
}

int	main(void)
{
	test(5, 10);
	test(-1, 2);
	test(0, 0);
	test(0, -3);
	return (0);
}
 */
