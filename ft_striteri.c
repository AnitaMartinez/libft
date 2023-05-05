/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:29:14 by anamartinez       #+#    #+#             */
/*   Updated: 2023/05/05 13:52:48 by anamartinez      ###   ########.fr       */
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
		f(i, &s[i]);
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