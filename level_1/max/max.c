/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 08:27:36 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/23 08:33:30 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
    int i;
    int max_num;

    if (len == 0)
        return (0);
    max_num = tab[0];
    i = 1;
    while (i < len)
    {
        if (tab[i] > max_num)
            max_num = tab[i];
        i++;
    }
    return (max_num);
}
