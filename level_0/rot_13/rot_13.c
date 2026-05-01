/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rot_13.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/01 01:55:23 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/05/01 02:05:23 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				write(1, &"nopqrstuvwxyzabcdefghijklm"[argv[1][i] - 'a'], 1);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				write(1, &"NOPQRSTUVWXYZABCDEFGHIJKLM"[argv[1][i] - 'A'], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
