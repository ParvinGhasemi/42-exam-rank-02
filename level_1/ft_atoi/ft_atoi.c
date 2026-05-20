/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/20 06:32:11 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/05/20 06:45:23 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int num;

    i = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
        || str[i] == '\n' || str[i] == '\v')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    num = 0;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return (sign * num);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_atoi("-34855"));
	return (0);
}
