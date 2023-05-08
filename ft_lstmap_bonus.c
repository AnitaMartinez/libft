/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:14:07 by anamartinez       #+#    #+#             */
/*   Updated: 2023/05/08 19:12:20 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void free_memory_content(void *content)
// {
// 	free(content);
// }
// void	*aux_f(void *content)
// {
// 	(void)content;
// 	return "A node";
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
// 	t_list *result = ft_lstmap(my_list, aux_f, free_memory_content);
// 	while (result != NULL)
// 	{
// 		printf("result: %s\n", result->content);
// 		result = result->next;
// 	}
// 	return (0);
// }