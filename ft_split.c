/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:48:54 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/11 21:00:20 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_words_number(char const *s, char c)
{
	int	i;
	int n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (i == 0)
				n += 0;
			else if (i == 1 && s[0] == c) // esque esto no funcinoa si hay muchas adelante
				n += 0;
			else if (s[i + 1] == '\0')
				n += 0;
			else if (s[i + 1] == c)
				n += 0;
			else
				n++;
		}
		i++;
	}
	return (n + 1);
}

// char	**ft_split(char const *s, char c)
// {
// 	int words_number;

// 	words_number = get_words_number(s, c);

// }

int	main(void)
{
	char str[] = ",,,hola,que,tal,";
	printf("%i\n", get_words_number(str, ','));
	// ft_split(str, ',');
	return (0);
}