/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:23:59 by syarham           #+#    #+#             */
/*   Updated: 2023/07/23 19:38:39 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*first;
	unsigned char	*second;

	i = 0;
	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	while (i < n)
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
		i++;
	}
	return (0);
}

// if (((unsigned char *)(s1))[i] != ((unsigned char *)(s2))[i])
// 	return ((unsigned char *)(s1))[i] - (unsigned char *)(s2)[i]))