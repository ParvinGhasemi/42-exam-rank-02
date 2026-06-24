/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 02:27:09 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 03:10:15 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char   reversed;
    int             bit;

    bit = 8;
    reversed = 0;
    while (bit > 0)
    {
        bit--;
        reversed = (reversed << 1) | (octet & 1);
        octet >>= 1;
    }
    return (reversed);
}

// Below here is just a test to see what happens in each step.
// uncomment, compile, and see what happens.
/* 
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		printf("%d", (octet >> i) & 1);
		i--;
	}
}

void	reverse_bits_debug(unsigned char octet)
{
	int				i;
	unsigned char	result;

	i = 0;
	result = 0;
	while (i < 8)
	{
		printf("step %d\n", i + 1);

		printf("before: octet = ");
		print_bits(octet);
		printf(" | result = ");
		print_bits(result);
		printf("\n");

		result <<= 1;
		result |= (octet & 1);
		octet >>= 1;

		printf("after:  octet = ");
		print_bits(octet);
		printf(" | result = ");
		print_bits(result);
		printf("\n\n");

		i++;
	}
}

int	main(void)
{
	unsigned char	x;

	x = 38; // 00100110
	reverse_bits_debug(x);
	return (0);
}
 */
