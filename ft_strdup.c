/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:02:26 by syarham           #+#    #+#             */
/*   Updated: 2023/07/27 16:44:15 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: save a copy of a string (with malloc)
**
** DESCRIPTION:
** 		The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
*/
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	slen;

	slen = ft_strlen (s);
	s2 = (char *)malloc(sizeof(*s2) * (slen + 1));
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s, slen + 1);
	return (s2);
}
