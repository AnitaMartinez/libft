/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:27:48 by anamart3          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:02 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*chaystack;
	size_t	i_h;
	size_t	i_n;

	chaystack = (char *)haystack;
	if (needle[0] == '\0')
		return (chaystack);
	i_h = 0;
	while (chaystack[i_h] && i_h < len)
	{
		i_n = 0;
		while (needle[i_n])
		{
			if (i_h + i_n >= len)
				break ;
			if (chaystack[i_h + i_n] == needle[i_n] && needle[i_n + 1] == '\0')
				return (chaystack + i_h);
			if (chaystack[i_h + i_n] != needle[i_n])
				break ;
			i_n++;
		}
		i_h++;
	}
	return (0);
}

// int	main(void)
// {
//     char str1[] = "hola que tal";
//     char str2[] = "que";
// 	size_t len = 8;
//     printf("My function: %s\n", ft_strnstr(str1, str2, len));
//     printf("Official function: %s\n", strnstr(str1, str2, len));
//     return (0);
// }
