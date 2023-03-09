/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:40:03 by anamart3          #+#    #+#             */
/*   Updated: 2023/03/08 18:06:29 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*#include <string.h>
#include <stdio.h>
int main(void) {
	printf("My function: %i\n", ft_strlen("hola"));
	printf("Official function: %ld\n", strlen("hola"));
    return (0);
}*/
