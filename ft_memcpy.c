/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:07:58 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/04 19:46:11 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*cdst;
	const unsigned char	*csrc;

	if (!dst && !src)
		return (0);
	i = 0;
	cdst = (unsigned char *) dst;
	csrc = (const unsigned char *) src;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "hola";
	char dest[50] = "adios";
	char dest1[50] = "adios";

	printf("Official function returns: %s\n", memcpy(dest + 1, src, 3));
	printf("Official function: %s\n", dest);

	printf("My function returns: %s\n", ft_memcpy(dest1 + 1, src, 3));
	printf("My function: %s", dest1);
	return (0);
}*/
