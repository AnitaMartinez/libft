/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:08:31 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/22 19:08:31 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// la lista (list) en realidad es un nodo más, pero es el primer  nodo,
// es decir, la referencia al primer elemento
void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (new == NULL)
		return;

	if (*list == NULL)
	{
		*list = new;
		return;
	}

	new->next = *list;
	*list = new;
}


// El primero nodo debería o no tener contenido?

int main(void)
{

	t_list	*list;
	t_list	*some_node;
	char *str_content = "hola";
	char *str_content2 = "adios";

	list = (t_list *) malloc(sizeof(t_list)); // TODO: al primer elemento no debería pasarle contenido, creo
	list->content = str_content;
	list->next = NULL;

	some_node = (t_list *) malloc(sizeof(t_list));
	some_node->content = str_content2;
	some_node->next = NULL;

	printf("Before: %s\n", (char *)list->content);

	ft_lstadd_front(&list, some_node);

	printf("After: %s\n", (char *)list->content);

	printf("After: %s", (char *)list->next->content);

	return (0);
}