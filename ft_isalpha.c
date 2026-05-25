/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:43:50 by syarham           #+#    #+#             */
/*   Updated: 2023/05/24 13:05:59 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;

	c = 24;
	printf("%d\n", isalpha(c));
	printf("%d \n", ft_isalpha(c));
	printf("%d\n", isalpha(65));
	printf("%d \n", ft_isalpha(65));
	return (0);
}*/
