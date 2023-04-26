/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:09:49 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/26 19:32:14 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_result_length(size_t dst_l, size_t dstsize, size_t src_l)
{
	if (dst_l > dstsize)
		return (src_l + dstsize);
	return (dst_l + src_l);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	initial_dst_length;
	size_t	src_length;
	size_t	i_dst;
	size_t	i_src;

	if (!dst || !src)
		return (0);
	initial_dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	i_dst = initial_dst_length;
	i_src = 0;
	if (dstsize <= initial_dst_length)
		return (src_length + dstsize);
	if (dstsize != 0)
	{
		while (src[i_src] && i_dst < dstsize - 1)
		{
			dst[i_dst] = src[i_src];
			i_dst++;
			i_src++;
		}
		dst[i_dst] = '\0';
	}
	return (get_result_length(initial_dst_length, dstsize, src_length));
}

// #include <string.h>
// int	main(void)
// {
// 	char dst[] = "123456789";
// 	char dst1[] = "123456789";
// 	char src[] = "ana";
// 	size_t total_length = 0;
// 	printf("Official function return: %lu\n", strlcat(dst, src, total_length));
// 	printf("Official function dst: %s\n", dst);
// 	printf("My function return: %lu\n", ft_strlcat(dst1, src, total_length));
// 	printf("My function dst: %s\n", dst1);
// 	return (0);
// }
