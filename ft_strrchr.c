/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:59:56 by anamart3          #+#    #+#             */
/*   Updated: 2023/05/03 17:32:54 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
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
