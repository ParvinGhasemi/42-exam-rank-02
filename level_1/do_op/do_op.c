/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_op.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/20 06:47:49 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/05/20 07:07:09 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	do_op(int first, int second, char op)
{
	int	result;

	result = 0;
	if (op == '+')
		result = first + second;
	else if (op == '-')
		result = first - second;
	else if (op == '*')
		result = first * second;
	else if (op == '/')
		result = first / second;
	else if (op == '%')
		result = first % second;
	return (result);
}

int	main(int argc, char **argv)
{
	int		result;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	result = do_op(atoi(argv[1]), atoi(argv[3]), argv[2][0]);
	printf("%d\n", result);
	return (0);
}
