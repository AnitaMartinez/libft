/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:44:20 by anamartinez       #+#    #+#             */
/*   Updated: 2023/05/05 13:12:05 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *aux;

	if (!lst || !f)
		return ;

	aux = lst;
	while (aux != NULL)
	{
		f(aux->content);
		aux = aux->next;
	}
}

// void print_node(void *content)
// {
//     printf("%s\n", (char *)content);
// }
// int main(void)
// {
// 	t_list *my_list = NULL;
// 	t_list *node1 = (t_list *)malloc(sizeof(t_list));
// 	t_list *node2 = (t_list *)malloc(sizeof(t_list));

// 	node1->content = "node 1";
// 	node2->content = "node 2";
// 	my_list = node1;
// 	my_list->next = node2;
// 	node2->next = NULL;
// 	ft_lstiter(my_list, print_node);
// 	return (0);
// }