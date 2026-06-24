/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 07:27:56 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 07:45:30 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int    lcm;

    if (a == 0 || b == 0)
        return (0);
    if (a % b == 0)
        return (a);
    else if (b % a == 0)
        return (b);
    if (a > b)
        lcm = a;
    else
        lcm = b;
    while ((lcm % a != 0) || (lcm % b != 0))
        lcm++;
    return (lcm);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%u\n", lcm(12, 18)); // 36
	printf("%u\n", lcm(4, 6));   // 12
	printf("%u\n", lcm(5, 7));   // 35
	printf("%u\n", lcm(0, 5));   // 0
	return (0);
}
*/
