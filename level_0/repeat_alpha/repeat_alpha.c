/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 23:13:32 by pamohamm          #+#    #+#             */
/*   Updated: 2026/02/26 23:45:57 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_repeat_count(char character)
{
	if (character >= 'a' && character <= 'z')
		return (character - 'a' + 1);
	if (character >= 'A' && character <= 'Z')
		return (character - 'A' + 1);
	return (1);
}

void	write_characters(char character)
{
	int	count;

	count = find_repeat_count(character);
	while (count > 0)
	{
		write(1, &character, 1);
		count--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			write_characters(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
