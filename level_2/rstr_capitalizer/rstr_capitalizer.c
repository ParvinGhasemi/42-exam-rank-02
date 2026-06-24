/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 09:07:21 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/24 09:26:53 by pamohamm         ###   ########.fr       */
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

int is_letter(char c)
{
    return (is_upper(c) || is_lower(c));
}

int is_last_letter(char *str, int i)
{
    int j;

    j = i + 1;
    while (str[j] != '\0')
    {
        if (!is_space(str[j]))
            return (0);
        j++;
    }
    return (1);
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
            if ((argv[argument][i + 1] == '\0' || is_space(argv[argument][i + 1]))
                && is_lower(c))
                c -= 32;
            write(1, &c, 1);
            i++;
        }
        write(1, "\n", 1);
        argument++;
    }
    return (0);
}
