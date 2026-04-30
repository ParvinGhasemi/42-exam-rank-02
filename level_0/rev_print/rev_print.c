/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rev_print.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/01 01:36:00 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/05/01 01:53:25 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	len--;	
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	write(1, "\n", 1);
	return (str);
}
