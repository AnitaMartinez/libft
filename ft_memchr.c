/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:59:56 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/08 18:21:24 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;

	aux = (unsigned char *)s;
	while (n > 0)
	{
		if (*aux == (unsigned char)c)
			return (aux);
		aux++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	printf("My function %s\n", (char *)ft_memchr(tab, -1, 7));
//    	int tab1[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	printf("Official function: %s", (char *)memchr(tab1, -1, 7));
//     return (0);
// }
