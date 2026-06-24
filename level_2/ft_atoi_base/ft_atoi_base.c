/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 04:28:23 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 05:39:02 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int get_digit(char digit)
{
    if (digit >= '0' && digit <= '9')
        return (digit - '0');
    if (digit >= 'a' && digit <= 'f')
        return (digit - 'a' + 10);
    if (digit >= 'A' && digit <= 'F')
        return (digit - 'A' + 10);
    return (-1);
}

int ft_atoi_base(const char *str, int  str_base)
{
    int i;
    int sign;
    int result;
    int digit;

    i = 0;
    sign = 1;

    if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
    result = 0;
    digit = get_digit(str[i]);
    while (digit >= 0 && digit < str_base)
    {
        result = (result * str_base) + digit;
        i++;
        digit = get_digit(str[i]);
    }
    return (result * sign);
}
/* 
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base("101", 2));      // 5
	printf("%d\n", ft_atoi_base("123", 4));      // 27
	printf("%d\n", ft_atoi_base("42", 10));      // 42
	printf("%d\n", ft_atoi_base("-42", 10));     // -42
	printf("%d\n", ft_atoi_base("FF", 16));      // 255
	printf("%d\n", ft_atoi_base("ff", 16));      // 255
	printf("%d\n", ft_atoi_base("7B", 16));      // 123
	printf("%d\n", ft_atoi_base("12345", 4));    // 27 (stops at '4')
	return (0);
}
 */
