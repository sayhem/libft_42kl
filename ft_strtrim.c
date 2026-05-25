/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:48:58 by syarham           #+#    #+#             */
/*   Updated: 2023/07/27 16:44:36 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: trim beginning and end of string with the specified characters
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a copy of ’s1’ with the
**	characters specified in ’set’ removed from the beginning and the end of the
**	string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (s1[j] && ft_strchr(set, s1[j]) && i < j)
		j--;
	return (ft_substr(s1, i, (j - i + 1)));
}

/*
we have s1[i] in the loop conditon because we need to ignore the null. 
strchr considers null to be part of string.
i = strlen(s1) - 1 : the indexing starts from 0;
*/

/*int main(void)
{
	char s1 [] = "     ";
	char set [] = " ";
	char *result;
	
	// result = ft_strtrim(s1, set);
	// printf("%s\n", result);
	ft_strtrim(s1, set);
	return (0);
	
}*/
