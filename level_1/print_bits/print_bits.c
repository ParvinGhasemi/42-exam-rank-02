/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 08:36:01 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/23 08:52:36 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int             shift;
    unsigned char   bit;

    shift = 8;
    while (shift > 0)
    {
        shift--;
        bit = ((octet >> shift) & 1) + '0';
        write(1, &bit, 1);
    }
}

int	main(void)
{
	print_bits(0x42);
    write(1, "\n", 1);
	print_bits(0x8);
	return (0);
}
