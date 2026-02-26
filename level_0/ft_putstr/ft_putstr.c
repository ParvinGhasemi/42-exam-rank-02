/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 22:14:05 by pamohamm          #+#    #+#             */
/*   Updated: 2026/02/26 22:22:38 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("\n**Checking for NULL**\n");
// 	ft_putstr(NULL);

// 	printf("\n**Checking an empty string**\n");
// 	ft_putstr("");

// 	printf("\n**Checking a normal string**\n");
// 	ft_putstr("Hello, World!\n");

// 	return (0);
// }
