/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:08:31 by anamartinez       #+#    #+#             */
/*   Updated: 2023/05/05 13:50:43 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (new == NULL)
		return ;
	if (*list == NULL)
	{
		*list = new;
		return ;
	}
	new->next = *list;
	*list = new;
}

// int main(void)
// {
// 	t_list *my_list;
// 	my_list = NULL;
// 	t_list *new_node = ft_lstnew("Un nodo");
// 	ft_lstadd_front(&my_list, new_node);
// 	printf("%s\n", my_list->content);
// 	printf("%p", my_list->next);
// 	return (0);
// }