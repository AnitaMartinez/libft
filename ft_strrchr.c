/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:59:56 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/08 18:44:12 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <string.h>
// int	main(void)
// {
//     char str[] = "hola como estas como";
//     char tofynd = '\0';
//     printf("My function: %s\n", ft_strrchr(str, tofynd));
//     printf("Official function: %s\n", strrchr(str, tofynd));
//     return (0);
// }
