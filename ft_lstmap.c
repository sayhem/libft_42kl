/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:35:22 by syarham           #+#    #+#             */
/*   Updated: 2023/07/21 22:26:00 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_head = NULL;
	while (lst)
	{
		new_list = ft_lstnew(f(lst -> content));
		if (!new_list)
			return (NULL);
		ft_lstadd_back(&new_head, new_list);
		lst = lst -> next;
	}
	return (new_head);
}
