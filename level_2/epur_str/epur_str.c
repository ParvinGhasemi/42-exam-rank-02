/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 04:00:29 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 04:17:06 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    int i;
    int first_word;

    if (argc == 2)
    {
        i = 0;
        first_word = 1;
        while (argv[1][i] != '\0')
        {
            while (is_space(argv[1][i]))
                i++;
            if (argv[1][i] != '\0')
            {
                if (!first_word)
                    write(1, " ", 1);
                while (argv[1][i] != '\0'
                    && !is_space(argv[1][i]))
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
                first_word = 0;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
