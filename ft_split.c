/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:00:23 by syarham           #+#    #+#             */
/*   Updated: 2023/07/21 22:16:30 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	if (*s != c && *s)
		count++;
	while (*s)
	{
		if (*s == c && (*(s + 1) != c) && *(s + 1) != '\0')
			count++;
		s++;
	}
	return (count);
}

static char	**strings(char **ptr, char const *s, char c, int word_count)
{
	int	i;
	int	x;
	int	k;

	i = 0;
	x = 0;
	while (i < word_count)
	{
		k = 0;
		while (s[x] == c)
			x++;
		while (s[x] != c && s[x])
		{
			k++;
			x++;
		}
		ptr[i] = malloc(sizeof(char) * (k + 1));
		if (!ptr[i])
			return (NULL);
		i++;
	}
	return (ptr);
}

static char	**fill_strings(char **ptr, char const *s, char c, int word_count)
{
	int	i;
	int	j;

	i = 0;
	while (i < word_count)
	{
		j = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			ptr[i][j] = *s;
			j++;
			s++;
		}
		ptr[i][j] = '\0';
		s++;
		i++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	ptr = malloc(sizeof(char *) * (word_count + 1));
	if (!ptr)
		return (NULL);
	ptr = strings(ptr, s, c, word_count);
	ptr = fill_strings(ptr, s, c, word_count);
	ptr[word_count] = 0;
	return (ptr);
}

// int	main(void)
// {
// 	char **x ;
// 	int i = 0;
// 	char *str;

// 	str = ft_strdup("Trip");
// 	x = ft_split(str, ' ');

// 	while (x[i])
// 	{
// 		printf("%s\n", x[i]);
// 		i++;
// 	}
// 	// printf("%s", x[2]);
// 	// while (x[i])
// 	// {
// 	// 	printf(i? ", %s" : "%s", x[i]);
// 	// 	i++;
// 	// }
// }