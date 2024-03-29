/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:09:06 by anamart3          #+#    #+#             */
/*   Updated: 2023/05/03 17:24:22 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	make_copy(unsigned char *cds, const unsigned char *csrc, size_t len)
{
	size_t	i;

	if (csrc < cds)
	{
		i = len;
		while (i > 0)
		{
			i--;
			cds[i] = csrc[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			cds[i] = csrc[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cdst;
	const unsigned char	*csrc;

	if (!src && !dst)
		return (0);
	cdst = (unsigned char *) dst;
	csrc = (const unsigned char *) src;
	make_copy(cdst, csrc, len);
	return (dst);
}

// #include <string.h>
// int main(void)
// {
// 	char src[] = "hola";
// 	char dest[50] = "adios";
// 	char dest1[50] = "adios";
// 	printf("Official function returns: %s\n", memmove(dest + 1, src, 3));
// 	printf("Official function: %s\n", dest);
// 	printf("My function returns: %s\n", ft_memmove(dest1 + 1, src, 3));
// 	printf("My function: %s", dest1);
// 	return (0);
// }
