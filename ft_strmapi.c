/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:31:01 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/18 18:44:04 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	const int		len = ft_strlen(s);
	char			*result;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char to_upper_character(unsigned int indice, char c)
// {
// 	(void)indice;
// 	if (c >= 'a' && c <= 'z') {
//         return c - 32;
//     }
//     return c;
// }
// int	main(void)
// {
// 	char *str = "LoReM iPsUm";
// 	printf("Result: %s", ft_strmapi(str, &mapi));
// 	return (0);
// }∫