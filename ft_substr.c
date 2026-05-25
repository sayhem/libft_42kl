/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:54:39 by syarham           #+#    #+#             */
/*   Updated: 2023/07/08 06:17:09 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: extract substring from string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	last;
	char	*s2;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	last = start + len;
	if (len > ft_strlen(s))
		s2 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	while (start < last && s[start])
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int	main(void)
{
	char str [] = "thisis a test";
	
	printf("\n %s", ft_substr(str,4, 7));
	return (0);
	char str [] = "thisis a test";
	char *ret;
	ret = ft_substr(str, 90, 5);
	printf("%c", *ret);
	
}*/
