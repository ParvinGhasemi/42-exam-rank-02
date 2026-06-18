/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcspn.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/18 12:15:55 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2026/06/18 12:59:59 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *str, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (str[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

void	test(char *str, char *reject)
{
	printf("str: \"%s\" | reject: \"%s\"\n", str, reject);
	printf("mine: %zu | real: %zu\n", ft_strcspn(str, reject),
		strcspn(str, reject));
	printf("---\n");
}

int	main(void)
{
	test("abcde", " ");
	test("abcde", "x");
	test("abcde", "c");
	test("abcde", "a");
	test("abcde", "e");
	test("hello world", " ");
	test("hello world", "xyz");
	test("hello world", "ow");
	test("", "abc");
	test("abc", "");
	test("", "");
	test("123abc", "abc");
	test("123abc", "456");
	return (0);
}
*/