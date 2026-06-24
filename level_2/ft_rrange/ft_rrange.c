/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 06:14:42 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 06:19:25 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
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
            arr[i] = end - i;
        else
            arr[i] = end + i;
        i++;
    }
    return (arr);
}

/*
#include <stdio.h>
#include <stdlib.h>

void	test(int start, int end)
{
	int	*arr;
	int	len;
	int	i;

	len = start - end;
	if (len < 0)
		len = -len;
	len++;
	arr = ft_rrange(start, end);
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
	test(1, 3);    // 3 2 1
	test(-1, 2);   // 2 1 0 -1
	test(0, 0);    // 0
	test(0, -3);   // -3 -2 -1 0
	return (0);
}
*/
