/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:53:41 by syarham           #+#    #+#             */
/*   Updated: 2023/07/15 04:25:56 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	ptr = lst;
	count = 0;
	if (!ptr)
		return (count);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr -> next;
	}
	return (count);
}
