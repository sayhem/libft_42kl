/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 07:43:51 by syarham           #+#    #+#             */
/*   Updated: 2023/07/21 22:17:12 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (*lst != NULL)
	{
		ptr = ptr -> next;
		del((*lst)-> content);
		free(*lst);
		*lst = ptr;
	}
}
