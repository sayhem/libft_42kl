/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syarham <syarham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 03:05:30 by syarham           #+#    #+#             */
/*   Updated: 2023/07/15 04:43:08 by syarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst);
		last_node -> next = new;
	}
}

/*int main()
 {
	int four = 4;
    int *ptr = &four;

    t_list *head = ft_lstnew(ptr);
    t_list *new_node = ft_lstnew(&four);

    ft_lstadd_back(&head, new_node);

    // Print the contents of the linked list
    t_list *current = head;
    while (current != NULL) 
	{
        int *value = (int *)current->content;
        printf("%d ", *value);
        current = current->next;
    }
	printf("%d", ft_lstsize(head));
    printf("\n");
 }*/