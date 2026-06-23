/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 08:54:14 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/23 09:47:50 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int end;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
            i++;
        i--;
        while (i >= 0 && ft_isspace(argv[1][i]))
            i--;
        end = i;
        while (i >= 0 && !ft_isspace(argv[1][i]))
            i--;
        i++;
        while (i <= end)
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
