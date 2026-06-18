/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   inter.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/18 11:08:56 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/06/18 12:10:36 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	seen_already(char *str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == str[index])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			// printf("argv[1][%d] >> %c\n", i, argv[1][i]);
			j = 0;
			while (argv[2][j] != '\0')
			{
				// printf("	rgv[2][%d] >> %c\n", j, argv[2][j]);
				if (argv[1][i] == argv[2][j] && !seen_already(argv[1], i))
				{
					write(1, &argv[1][i], 1);
					// printf("\n");
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
