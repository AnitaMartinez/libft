/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:29:14 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/18 19:03:27 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void aux_function(unsigned int i, char* c)
// {
// 	(void)i;
// 	*c = ft_toupper(*c);
// }

// int	main(void)
// {
// 	char str[] = "hola";

// 	ft_striteri(str, aux_function);

// 	printf("Result %s", str);

// 	return (0);
// }