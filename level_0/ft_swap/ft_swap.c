/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 23:03:41 by pamohamm          #+#    #+#             */
/*   Updated: 2026/02/26 23:08:04 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	x = 10;
	int	y = 42;

	printf("Before swap: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("After swap:  x = %d, y = %d\n", x, y);

	return (0);
}