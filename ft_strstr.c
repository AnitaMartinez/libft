/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:27:48 by anamart3          #+#    #+#             */
/*   Updated: 2023/03/30 19:40:55 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(const char *haystack, const char *needle)
{
	char *chaystack;
	int	i_haystack;
	int i_needle;

	chaystack = (char *)haystack;

	if (needle == '\0')
		return (chaystack);

	i_haystack = 0;
	while (chaystack[i_haystack])
	{
		i_needle = 0;
		while (needle[i_needle])
		{
			if (chaystack[i_haystack] == needle[i_needle]) // esto está mal
				return (chaystack + i_haystack);
			i_needle++;
		}
		i_haystack++;
	}

	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
    char str1[] = "hola que tal";
    char str2[] = "lp";
    printf("My function: %s\n", ft_strstr(str1, str2));
    printf("Official function: %s\n", strstr(str1, str2));
    return (0);
}
