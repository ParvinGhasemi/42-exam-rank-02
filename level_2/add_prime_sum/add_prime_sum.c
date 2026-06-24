/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 03:24:38 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 03:56:56 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int num;

    i = 0;
    num = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    if (str[i] != '\0')
        return (0);
    return (num);
}

int is_prime(int num)
{
    int i;

    if (num < 2)
        return (0);
    i = 2;
    while (i * i <= num)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void    ft_putnbr(int num)
{
    char    c;
    if (num >= 10)
        ft_putnbr(num / 10);
    c = num % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int num;
    int i;
    int sum;

    sum = 0;
    if (argc == 2)
    {
        num = ft_atoi(argv[1]);
        i = 2;
        // if (num < 2)
        // {
        //     sum == 0;
        //     break ;
        // }
        while (i <= num)
        {
            if (is_prime(i))
                sum += i;
            i++;
        }
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
    return (0);
}
