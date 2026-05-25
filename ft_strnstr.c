/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:36:46 by syarham           #+#    #+#             */
/*   Updated: 2023/07/22 01:50:51 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate a substring in a string (size-bounded)
**
** DESCRIPTION:
** 		The strnstr() function locates the first occurrence of the null-termi-
**	nated string s2 in the string s1, where not more than n characters are
**	searched.  Characters that appear after a `\0' character are not
**	searched.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	j = 0;
	if (*little == 0)
		return ((char *)big);
	if (!big && !len)
		return (NULL);
	while (big[i] && (i < len))
	{
		while ((big[k] == little[j]) && (k < len))
		{
			k++;
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
		j = 0;
		k = i;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// const char str1 [] = "foo bar baz";
// 	// const char str2[] = "bar";
// 	// printf("%s \n",strnstr(str1, str2, 7));
// 	// printf("%s \n",ft_strnstr(str1, str2, 7));
// 	// return (0);

// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	// char * empty = (char*)"";
// 	char *res;
// 	res = ft_strnstr(haystack, "abcd", 9);
// 	printf("%s", res);

// }
