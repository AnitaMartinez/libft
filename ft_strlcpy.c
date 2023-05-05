/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:10:08 by anamart3          #+#    #+#             */
/*   Updated: 2023/05/05 13:53:01 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	i;

	src_length = ft_strlen(src);
	if (dstsize == 0)
		return (src_length);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_length);
}

// int main(void)
// {
// 	char dst[50] = "";
// 	char src[] = "aaa";
// 	char dst1[50] = "";
// 	printf("Oficcial function return: %lu\n", strlcpy(dst, src, 0));
// 	printf("Official function dst: %s\n", dst);
// 	printf("My function return: %lu\n", ft_strlcpy(dst1, src, 0));
// 	printf("My function dst: %s\n", dst1);
// 	return (0);
// }
