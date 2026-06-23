/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:44:13 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/23 10:53:41 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	seen_before(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 3)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (!seen_before(argv[1], argv[1][i], i))
                write(1, &argv[1][i], 1);
            i++;
        }
        j = 0;
        while (argv[2][j] != '\0')
        {
            if (!seen_before(argv[1], argv[2][j], i)
                && !seen_before(argv[2], argv[2][j], j))
                write(1, &argv[2][j], 1);
            j++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
