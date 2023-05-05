/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:05:17 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/23 15:51:25 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		aux = *lst;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
}

// int main(void)
// {
// 	t_list *my_list = NULL;
// 	t_list *node_1 = ft_lstnew("node 1");
// 	ft_lstadd_front(&my_list, node_1);
// 	t_list *node_2 = ft_lstnew("node 2");
// 	my_list->next = node_2;
// 	t_list *node_3 = ft_lstnew("node 3");
// 	ft_lstadd_back(&my_list, node_3);
// 	while (my_list != NULL)
// 	{
// 		printf("%s\n", my_list->content);
// 		my_list = my_list->next;
// 	}
// 	return (0);
// }