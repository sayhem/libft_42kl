/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:49:59 by syarham           #+#    #+#             */
/*   Updated: 2023/07/14 22:31:04 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;

	if ((int)n < 0 && (int)size < 0)
		return (NULL);
	if ((n) * (size) > UINT_MAX)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}

/*#include <limits.h>
int	main(void)
{
	size_t n = -2;
	if (n == SIZE_MAX - 1)
		printf("YES");
	printf("%zu\n", n);
	printf("%d\n", (int)n);
	int *ptr;
	int *ptr2;
	ptr = calloc(-5,-5);
	printf("%p", ptr);
	ptr = ft_calloc(INT_MIN, INT_MIN);
	ptr2 = calloc(INT_MIN, INT_MIN);
	printf("%p \n", ptr);
	printf("%p \n", ptr2);
}*/