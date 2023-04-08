/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:31:24 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/06 17:29:43 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	length_number(int n)
{
	int	len; // tendría que ser unsigned?

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

static char	*ft_zero(char *str)
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

	len = length_number(n);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		return (ft_zero(str));
	number = number_without_sign(n, str);
	while (number != 0)
	{
		str[len - 1] = (number % 10) + 48;
		number = number / 10;
		len--;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("My function: %s", ft_itoa(-123));
// 	return (0);
// }