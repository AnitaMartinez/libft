/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:31:24 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/13 19:45:44 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*put_zero(char *str)
{
	str[0] = 48;
	return (str);
}

static int	number_without_sign(int n, char *str)
{
	if (n < 0)
	{
		str[0] = 45;
		return (-n);
	}
	else
		return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		number;
	int		len;

	if (n == -2147483648)
		return (ft_substr("-2147483648", 0, 11));

	len = number_len(n);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		return (put_zero(str));
	number = number_without_sign(n, str);
	while (number != 0)
	{
		str[len - 1] = (number % 10) + 48;
		number = number / 10;
		len--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("My function: %s", ft_itoa(2147483647));
// 	return (0);
// }