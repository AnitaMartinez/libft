/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:31:01 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/13 19:27:59 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*result;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}

// // función para hacer la prueba
// char to_upper_character(unsigned int indice, char c) // TODO: ¿por qué necesita el parámetro indice?
// {
// 	(void)indice;
// 	if (c >= 'a' && c <= 'z') {
//         return c - 32;
//     }
//     return c;
// }
// int	main(void)
// {

// 	char *str = "Hola Mundo!";
// 	printf("Result: %s", ft_strmapi(str, to_upper_character));
// 	return (0);
// }