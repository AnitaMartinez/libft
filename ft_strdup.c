/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:10:29 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/04 19:46:31 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>
// #include <stdlib.h>

// size_t	ft_strlen(const char *s);
// void	*ft_memmove(void *dst, const void *src, size_t len);
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		str_length;

	str_length = ft_strlen(s1);
	dst = (char *)malloc(str_length + 1 * sizeof(char));
	ft_memmove(dst, (char *)s1, str_length);
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[] = "hola";

// 	printf("My function: %s\n", ft_strdup(str));
// 	printf("Official function: %s", strdup(str));

// 	return (0);
// }