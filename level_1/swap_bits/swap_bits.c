/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_bits.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/14 15:44:03 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/04/14 16:08:17 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}


//test
// #include <stdio.h>
// int	main(void)
// {
// 	unsigned char x = 0b01000001; // x = 65 in decimal
// 	unsigned char y = swap_bits(x);

// 	printf("Before: %u\n", x);
// 	printf("After:  %u\n", y);

// 	return (0);
// }
// or to print it in binary format(bits)
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}
int	main(void)
{
	unsigned char x = 65; // 01000001
	unsigned char y;

	print_bits(x);
	write(1, "\n", 1);

	y = swap_bits(x);
	print_bits(y);
	write(1, "\n", 1);

	return (0);
}