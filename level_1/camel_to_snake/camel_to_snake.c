/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   camel_to_snake.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/20 14:27:29 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/06/18 13:17:05 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	alpha;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			alpha = argv[1][i];
			if (alpha >= 'A' && alpha <= 'Z')
			{
				write(1, "_", 1);
				alpha = alpha + 32;
			}
			write(1, &alpha, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
