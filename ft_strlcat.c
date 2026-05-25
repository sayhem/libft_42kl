/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:06:08 by syarham           #+#    #+#             */
/*   Updated: 2023/07/22 01:45:37 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	if (!src && !dst)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	srclen = ft_strlen (src);
	dstlen = ft_strlen (dst);
	j = dstlen;
	if (dstlen >= size)
		return (size + srclen);
	while (src[i] && j + 1 < size)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (srclen + dstlen);
}
