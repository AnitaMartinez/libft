/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:08:32 by anamart3          #+#    #+#             */
/*   Updated: 2023/03/08 18:29:42 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>	

void	*ft_memset(void *b, int c, size_t len)
{
	(unsigned char*)b;
	
	while (len >= 0)
	{
		len--;
	}

	return (0);	
}

int	main(void)
{
	char str[] = "hola que tal";
	memset(str + 2, '*', 3);
	printf("Official function %s\n", str);

	char str1[] = "hola que tal";
	ft_memset(str + 2, '*', 3);
	printf("My function %s", str1);  
	return (0);
}
