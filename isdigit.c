/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:03:12 by anamart3          #+#    #+#             */
/*   Updated: 2023/03/08 17:11:01 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int main(void) {
    char c = '4';
	printf("My function: %d\n", ft_isdigit(c));
	printf("Official function: %d\n", isdigit(c));
    return (0);
}*/
