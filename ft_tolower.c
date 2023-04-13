/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:10:31 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/13 19:47:27 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	return (c);
}

// #include <ctype.h>
// int	main(void)
// {
//     printf("%i\n", ft_tolower('Z'));
//     printf("%i", tolower('Z'));
//     return (0);
// }