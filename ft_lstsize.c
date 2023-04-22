/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:45:02 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/22 18:59:00 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

int ft_lstsize(t_list *lst)
{
	int	counter;
	t_list *aux;

	counter = 0;
	aux = lst;
	while (aux->next != NULL)
	{
		counter++;
		aux = aux->next;
	}
	return (counter);
}

int main(void)
{

	t_list	*list;
	t_list	*node2;
	t_list	*node3;
	char *str_content = "hola";

	list = (t_list *) malloc(sizeof(t_list));
	list->next = NULL;

	node2 = (t_list *) malloc(sizeof(t_list));
	node2->content = str_content;
	node2->next = NULL;

	list->next = node2;

	node3 = (t_list *) malloc(sizeof(t_list));
	node3->content = str_content;
	node3->next = NULL;

	node2->next = node3;

	printf("Result: %i", ft_lstsize(list)); // El primer elemento cuenta? creo que no

	return (0);
}