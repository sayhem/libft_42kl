/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:46:28 by syarham           #+#    #+#             */
/*   Updated: 2023/07/22 02:13:33 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: write a byte to a byte string
**
** DESCRIPTION:
** 		The memset() function writes n bytes of value x (converted to an
**	unsigned char) to the string s.
*/

#include "libft.h"
#include <string.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	int	count;

	count = 0;
	while (n)
	{
		*(unsigned char *)ptr = (unsigned char)x;
		ptr++;
		n--;
		count++;
	}
	return (ptr - count);
}

/*int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
	char str2 [50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
	printf("\nBefore memset(): %s\n", str2);
  
    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8*sizeof(char));
	ft_memset(str2 + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s\n", str);
	printf("After memset():  %s\n", str2);
	char	tab[100];
	int		i;
	[ , , , , , , , , , , ]
	i = 0;
	ft_memset(tab, 'A', 8);
	while (i < 100 && tab[i] == 'A')
		i++;
	printf("%d", i);
    return (0);
}*/