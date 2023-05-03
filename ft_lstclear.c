/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:08:55 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/26 20:15:50 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

	
void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return (NULL);
	
}

void free_memory_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *my_list = NULL;
	t_list *node1 = ft_lstnew("node 1");
	ft_lstadd_front(&my_list, node1);
	t_list *node2 = ft_lstnew("node 2");
	my_list->next = node2;
	t_list *node3 = ft_lstnew("node 3");
	node2->next = node3;
	
	while (my_list != NULL)
	{
		printf("Before: %s\n", my_list->content);
		my_list = my_list->next;
	}

	ft_lstclear(my_list, free_memory_content);
	
	return (0);
}