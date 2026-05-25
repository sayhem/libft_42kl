/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:52:55 by syarham           #+#    #+#             */
/*   Updated: 2023/07/21 23:05:13 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: convert integer to ASCII string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a string representing the
**	integer received as an argument. Negative numbers must be handled.
*/
#include "libft.h"

static char	*size_allocate(long n, int *count);

char	*ft_itoa(int n)
{
	long	n2;
	int		count;
	char	*array;

	n2 = (long) n;
	count = 0;
	array = size_allocate(n2, &count);
	if (!array)
		return (NULL);
	array[count] = '\0';
	count--;
	if (n2 == 0)
		array[0] = '0';
	if (n2 < 0)
	{
		array[0] = '-';
		n2 *= -1;
	}
	while (n2 > 0)
	{
		array[count--] = (n2 % 10) + '0';
		n2 /= 10;
	}
	return (array);
}

static char	*size_allocate(long n, int *count)
{
	char	*ptr;

	if (n == 0)
		(*count)++;
	if (n < 0)
	{
		(*count)++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		(*count)++;
	}
	ptr = malloc(sizeof(char) * ((*count) + 1));
	if (!ptr)
		return (NULL);
	return (ptr);
}

/*int	main(void)
{
	char *test;

	int n = 0;
	test = ft_itoa(n);
	printf("%s", test);
	free(test);
}*/