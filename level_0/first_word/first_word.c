/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 20:15:09 by pamohamm          #+#    #+#             */
/*   Updated: 2026/02/26 20:56:36 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char character)
{
	if (character == ' ' || character == '\t')
		return (1);
	return (0);
}

void	ft_get_first_word(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && ft_isspace(str[i]) == 1)
		i++;
	while (str[i] != '\0' && !ft_isspace(str[i]))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_get_first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
	