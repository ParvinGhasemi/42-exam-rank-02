/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 01:49:03 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/23 02:27:31 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int num)
{
    if (num == 0)
        return (0);
    if ((num & (num - 1)) == 0)
}

/* 
int is_power_of_2(unsigned int num)
{
    unsigned int    power;
    if (num == 0)
        return (0);
    power = 1;
    while (power < num)
    {
        power = power * 2;
    }
    return (power == num);
}
 */
/* 
 int    is_power_of_2(unsigned int num)
 {
    if (num == 0)
        return (0);
    while(num % 2 == 0)
    {
        num = num / 2;
    }
    return (num == 1)
 }
 */
 