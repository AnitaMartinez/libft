/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:59:56 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/08 18:43:46 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c > 256)
		c %= 256;
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
//     char str[] = "teste";
//     char tofynd = 'e';
//     printf("My function: %s\n", ft_strchr(str, tofynd));
//     printf("Official function: %s\n", strchr(str, tofynd));
//     return (0);
// }
