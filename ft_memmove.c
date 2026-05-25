/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:59:26 by syarham           #+#    #+#             */
/*   Updated: 2023/07/22 01:08:09 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy byte string
**
** DESCRIPTION:
** 		The memmove() function copies n bytes from string s2 to string s1.  The
**	two strings may overlap; the copy is always done in a non-destructive
**	manner.
*/

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*dest2;
	char	*src2;

	dest2 = (char *)dest;
	src2 = (char *)src;
	i = (int)n - 1;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (i >= 0)
		{
			dest2[i] = src2[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(dest2, src2, n);
	}
	return (dest2);
}

/*void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*first_copy;
	char		*second_copy;
	void		*temp_array;

	temp_array = (void *) malloc (sizeof(char) * n);
	if (temp_array == NULL)
		return (NULL);

	first_copy = ft_memcpy(temp_array, src, n);
	second_copy = ft_memcpy(dest, temp_array, n);

	free(temp_array);
	return ((void *)second_copy);
}*/

/*int main(void)
{
    char str[100] = "Learningisfun";
	char str2[100] = "Learningisfun";
   
    printf("Original string :%s\n ", str);
      
    // when overlap happens then it just ignore it
    // memcpy(first + 8, first, 10);
    // printf("memcpy overlap : %s\n ", str);
  
    // when overlap it start from first position
    memmove(str + 8, str, 10);
    printf("memmove overlap : %s\n ", str);
	ft_memmove(str2 + 8, str2, 10);
    printf("ft_memmove overlap : %s\n ", str2);
  
    return (0);
}*/