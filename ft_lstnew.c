/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.C                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:40:38 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/22 17:00:34 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *) malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main(void)
// {
// 	char *str = "Hola mundo";
// 	t_list *new_node = ft_lstnew(str);
// 	if (new_node != NULL)
// 	{
// 		printf("Node content: %s", (char *)new_node->content);
// 	}

// 	return (0);
// }