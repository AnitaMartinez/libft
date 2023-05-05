/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:45:25 by anamart3          #+#    #+#             */
/*   Updated: 2023/05/05 13:13:18 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
// 	while (my_list != NULL)
// 	{
// 		printf("Before: %s\n", my_list->content);
// 		my_list = my_list->next;
// 	}
// 	ft_lstdelone(my_list, free_memory_content);
// 	printf("After: %p\n", my_list);
// 	return (0);
// }