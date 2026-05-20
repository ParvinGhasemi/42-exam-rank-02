/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_and_replace.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/01 03:02:13 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/05/17 18:40:21 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char    old;
    char    new;
    char    *str;
    int     i;
    if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        write(1, "\n", 1);
        exit(0);
    }
    old = argv[2][0];
    new = argv[3][0];
    str = argv[1];
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == old)
            write(1, &new, 1);
        else
            write (1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
