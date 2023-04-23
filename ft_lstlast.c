/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:15:48 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/23 15:34:21 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	if (lst == NULL)
		return (NULL);
	aux = lst;
	while (aux != NULL)
	{
		lst = aux;
		aux = aux->next;
	}

	// También se puede hacer así:
	// while (lst->next)
	// {
	// 	lst = lst->next;
	// }
	// return (lst);
	
	return (lst);
}

// int main(void)
// {

// 	t_list *my_list;

// 	my_list = NULL;

// 	t_list *node_1 = ft_lstnew("Nodo 1");
// 	ft_lstadd_front(&my_list, node_1);

// 	t_list *node_2 = ft_lstnew("Nodo 2");
// 	my_list->next = node_2;

// 	t_list *node_3 = ft_lstnew("Nodo 3");
// 	node_2->next = node_3;
// 	node_3->next = NULL;

// 	t_list *last_node = ft_lstlast(my_list);
// 	printf("%s", last_node->content);
	
// 	return (0);
// }