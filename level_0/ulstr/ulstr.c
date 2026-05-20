/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ulstr.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/20 05:40:11 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/05/20 05:50:50 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1] != '\0')
	{
		c = *argv[1];
		if (c >= 'a' && c <= 'z')
			c = c - 32;
		else if (c >= 'A' && c <= 'Z')
			c = c + 32;
		write(1, &c, 1);
		argv[1]++;
	}
	write(1, "\n", 1);
	return (0);
}
