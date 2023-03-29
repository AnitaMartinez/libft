/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:09:49 by anamart3          #+#    #+#             */
/*   Updated: 2023/03/29 19:10:01 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i_dst;
	size_t	i_src;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	i_dst = dst_length;
	i_src = 0;
	while (src[i_src] && i_dst < dstsize - 1)
	{
		dst[i_dst] = src[i_src];
		i_dst++;
		i_src++;
	}
	dst[i_dst] = '\0';
	if (dst_length > dstsize)
		return (dst_length + dstsize + 1);
	return (dst_length + src_length);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char dst[50] = "hola";
	char src[] = "mundo";
	char dst1[50] = "hola";
	size_t total_length = 11;

	printf("Official function return: %lu\n", strlcat(dst, src, total_length)); // 6
	printf("Official function dst: %s\n", dst); // hola

	printf("My function return: %lu\n", ft_strlcat(dst1, src, total_length)); // 9
	printf("My function dst: %s\n", dst1); // hola

	return (0);
} */
