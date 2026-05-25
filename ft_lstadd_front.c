/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:39:20 by syarham           #+#    #+#             */
/*   Updated: 2023/07/15 04:53:44 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (! (*lst))
		*lst = new;
	else
	{
		new -> next = &(**lst);
		*lst = new;
	}
}

/*int main()
{
	int six = 6;
	int *ptr = &six; 
	t_list	*new_node;
	
	t_list *head;
	t_list **ptr_head;
	
	head = ft_lstnew(ptr);
	ptr_head = &head;
	new_node = ft_lstnew(ptr);
	ft_lstadd_front(ptr_head, new_node);
	
	printf("%d", ft_lstsize(head));
	printf("%d", *(int*)(head ->content));
}*/
