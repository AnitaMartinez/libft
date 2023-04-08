/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:59:56 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/04 19:46:24 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>

// size_t	ft_strlen(const char *s);
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	str_length;
	int		i;

	str = (char *)s;
	i = 0;
	if (c == '\0')
	{
		str_length = ft_strlen(s);
		return (str + str_length);
	}
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//     char str[] = "hola";
//     char tofynd = 'l';
//     printf("My function: %s\n", ft_strchr(str, tofynd));
//     printf("Official function: %s\n", strchr(str, tofynd));
//     return (0);
// }
