/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:09:06 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/02 11:45:09 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*cdst;
	const unsigned char	*csrc;

	cdst = (unsigned char *) dst;
	csrc = (const unsigned char *) src;
	printf("Dst %p\n", dst);
	printf("Src %p\n", src);
	if (!dst && !src)
		return (0);
	if (dst <= src)
	{
		printf("%s\n", "dst <= src");
		i = 0;
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}	
	}
	else if (dst > src)
	{
		printf("%s\n", "dst > src");
		i = len - 1;
		while (i > 0)
		{	
			cdst[i] = csrc[i];
			i--;
		}
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char dst[50] = "Hello";
	char src[] = "world!";

	char dst1[] = "Hello";


	printf("Oficcial function return: %s\n", memmove(dst + 5, src, 6));
	printf("Official function dst: %s\n", dst);

	printf("My function return: %s\n", ft_memmove(dst1 + 5, src, 6));
	printf("My function dst: %s\n", dst1);

	return (0);
}
