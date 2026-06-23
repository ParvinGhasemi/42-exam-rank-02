/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:35:20 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/23 10:42:28 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 3)
    {
        i = 0;
        j = 0;
        while (argv[1][i] != '\0' && argv[2][j] != '\0')
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (argv[1][i] == '\0')
            write(1, argv[1], i);
    }
    write (1, "\n", 1);
    return (0);
}
