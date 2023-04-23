/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:45:02 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/23 13:09:38 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*aux;

	counter = 0;
	aux = lst;
	while (aux != NULL)
	{
		counter++;
		aux = aux->next;
	}
	return (counter);
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

// 	printf("%i", ft_lstsize(my_list));
	
// 	return (0);
// }