/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   alpha_mirror.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/20 07:11:24 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/05/20 07:25:52 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mirror_alpha(char *str)
{
	int		i;
	char	mirrored;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			mirrored = 'z' - (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			mirrored = 'Z' - (str[i] - 'A');
		else
			mirrored = str[i];
		write(1, &mirrored, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		mirror_alpha(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}
