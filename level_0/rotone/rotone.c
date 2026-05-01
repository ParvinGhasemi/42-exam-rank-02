/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotone.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/01 02:53:38 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/05/01 02:53:54 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if (c >= 'a' && c <= 'z')
			{
				if (c == 'z')
					c = 'a';
				else
					c = c + 1;
			}
			else if (c >= 'A' && c <= 'Z')
			{
				if (c == 'Z')
					c = 'A';
				else
					c = c + 1;
			}
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
