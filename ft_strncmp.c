/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:07:43 by syarham           #+#    #+#             */
/*   Updated: 2023/07/22 01:35:57 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
    char s1[] = "HelloWorld";
    char s2[] = "Goodbye World";
    char s3[] = "HeBloWoR";
    
    printf("the return value is: %d\n", strncmp(s1, s2, 3));
    printf("the return value is:  %d\n", ft_strncmp(s1, s2, 3));
    return (0);
}*/
