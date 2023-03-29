/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:10:31 by anamart3          #+#    #+#             */
/*   Updated: 2023/03/29 19:10:56 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
//     printf("%i\n", ft_tolower('Z'));
//     printf("%i", tolower('Z'));
//     return (0);
// }