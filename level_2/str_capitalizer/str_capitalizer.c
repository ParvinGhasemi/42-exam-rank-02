/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 09:02:35 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 09:05:05 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int main(int argc, char **argv)
{
    int     argument;
    int     i;
    char    c;

    if (argc == 1)
        write(1, "\n", 1);
    argument = 1;
    while (argument < argc)
    {
        i = 0;
        while (argv[argument][i] != '\0')
        {
            c = argv[argument][i];
            if (is_upper(c))
                c += 32;
            if ((i == 0 || is_space(argv[argument][i - 1])) && is_lower(c))
                c -= 32;
            write(1, &c, 1);
            i++;
        }
        write(1, "\n", 1);
        argument++;
    }
    return (0);
}
