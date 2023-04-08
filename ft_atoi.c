/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:03:04 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/08 18:43:35 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_sign(const char *str, int *counter)
{
	int	sign;
	int	i;

	i = *counter;
	sign = 1;
	while ((str[i] == 45 || str[i] == 43)
		&& (str[i + 1] >= 48 && str[i + 1] <= 57))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*counter = i;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = get_sign(str, &i);
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			result = result * 10 + str[i] - 48;
		}
		else
			break ;
		i++;
	}
	return (result * sign);
}

// #include <stdlib.h>
// int	main(void){
// 	char str[] = "   -15?34534";
// 	printf("Official function: %i\n", atoi(str));
// 	printf("My function: %i\n", ft_atoi(str));
// 	return (0);
// }

