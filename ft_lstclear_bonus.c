/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:08:55 by anamart3          #+#    #+#             */
/*   Updated: 2023/05/05 12:02:59 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buffer;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		buffer = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = buffer;
	}
}

// void free_memory_content(void *content)
// {
// 	free(content);
// }
// int	main(void)
// {
// 	t_list *my_list = NULL;
// 	t_list *node1 = ft_lstnew("node 1");
// 	ft_lstadd_front(&my_list, node1);
// 	t_list *node2 = ft_lstnew("node 2");
// 	my_list->next = node2;
// 	t_list *node3 = ft_lstnew("node 3");
// 	node2->next = node3;
// 	while (my_list != NULL)
// 	{
// 		printf("Before: %s\n", my_list->content);
// 		my_list = my_list->next;
// 	}
// 	ft_lstclear(&my_list, free_memory_content);
// 	printf("After: %p\n", my_list);
// 	return (0);
// }