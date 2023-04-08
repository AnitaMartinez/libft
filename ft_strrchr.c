/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:59:56 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/04 19:46:53 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>

// size_t	ft_strlen(const char *s);
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tofind;
	char	*str;
	size_t	str_length;
	int		i;

	tofind = (char)c;
	str = (char *)s;
	str_length = ft_strlen(s);
	i = str_length;
	if (c == '\0')
		return (str + str_length);
	while (i >= 0)
	{
		if (str[i] == c)
			return (str + i);
		i--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
//     char str[] = "";
//     char tofynd = 'p';
//     printf("My function: %s\n", ft_strrchr(str, tofynd));
//     printf("Official function: %s\n", strrchr(str, tofynd));
//     return (0);
// }
