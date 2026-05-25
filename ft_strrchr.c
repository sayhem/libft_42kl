/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:08:27 by syarham           #+#    #+#             */
/*   Updated: 2023/07/07 22:53:04 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (last occurence)
**
** DESCRIPTION:
** 		The strrchr() function locates the last occurrence of c (converted to a
**	char) in the string s.  If c is `\0', strrchr() locates the terminating
**	`\0'.
*/

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while ((int)len >= 0)
	{
		if (s[len] == (char) c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char s1[] = "Hello world";
	const char s2[] = "Hello world";
	char c = 'o';

	printf("result is %s \n", strrchr(s1, c));
	printf("result is %s \n", ft_strrchr(s2, c));
	printf("%s", ft_strrchr("A", 256+65));

	char str[] = "tripouille";
	char *res;
	
	res = ft_strrchr(str, 'z');
	
	printf("%c", *res);
	return (0);
}*/