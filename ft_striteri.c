/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:29:14 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/13 19:43:49 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
	}
}

// void aux_function(unsigned int i, char* str)
// {
// 	(void)i;
// 	str[0] = ft_toupper(str[0]);
// }
// int	main(void)
// {
// 	char str[] = "hola";

// 	ft_striteri(str, aux_function);

// 	printf("Result %s", str);

// 	return (0);
// }