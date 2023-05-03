/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:31:01 by anamartinez       #+#    #+#             */
/*   Updated: 2023/05/03 18:11:46 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	const int		len = (int)ft_strlen(s);
	char			*result;
	unsigned int	i;

	if (!s || !f)
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