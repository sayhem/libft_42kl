/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:14:38 by syarham           #+#    #+#             */
/*   Updated: 2023/07/21 22:23:22 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	add_to_array(char *array, long nbr);

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	array[10];
	int		i;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr == 0)
		ft_putchar_fd('0', fd);
	else
	{
		i = add_to_array(array, nbr);
		i--;
		while (i >= 0)
		{
			write(fd, &array[i], 1);
			i--;
		}
	}
}

static int	add_to_array(char *array, long nbr)
{
	int		i;
	char	c;

	i = 0;
	while (nbr)
	{
		c = (nbr % 10) + '0';
		array[i] = c;
		nbr /= 10;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	int	n = -658;
	ft_putnbr_fd(n, 1);
	write(1, "\nl", 1);
}*/