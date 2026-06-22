/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 00:59:16 by pamohamm          #+#    #+#             */
/*   Updated: 2026/06/23 01:20:56 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>


size_t  ft_strspn(const char *str, const char *accept)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0' && accept[j] != str[i])
        {
            j++;
        }
        if (accept[j] == '\0')
            return (i);
        i++;
    }
    return (i);
}
/* 
#include <stdio.h>
#include <string.h>

void	test(char *str, char *accept)
{
	printf("str: \"%s\" | accept: \"%s\"\n", str, accept);
	printf("mine: %zu | real: %zu\n", ft_strspn(str, accept),
		strspn(str, accept));
	printf("---\n");
}

int	main(void)
{
	test("abcde", "abc");
	test("abcde", "a");
	test("abcde", "b");
	test("abcde", "e");
	test("abcde", "xyz");
	test("hello world", "helo");
	test("hello world", "hel");
	test("hello world", " ");
	test("   hello", " ");
	test("123abc", "0123456789");
	test("123abc", "abc");
	test("", "abc");
	test("abc", "");
	test("", "");
	test("aaaaab", "a");
	test("abababc", "ab");
	return (0);
}
 */