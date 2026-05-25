/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 21:28:23 by syarham           #+#    #+#             */
/*   Updated: 2023/06/29 20:58:17 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!temp)
		return (NULL);
	ft_memcpy(temp, s1, ft_strlen(s1));
	i = ft_strlen(s1);
	while (*s2)
	{
		*(temp + i) = *s2;
		i++;
		s2++;
	}
	*(temp + i) = '\0';
	return (temp);
}

/*int main(void)
{
	char s1[] = "hello";
	char s2[] = "world";
	char *s5;
	s5 = ft_strjoin(s1, s2
	printf("%s", s5);
	// free(s5);
	return (0);
}*/
