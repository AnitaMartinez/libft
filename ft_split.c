/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:48:54 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/12 19:09:40 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_of_words(char const *s, char c)
{
	int	i;
	int n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	int words_number;
	char **strings;
	int	i;
	int	start;
	int	len;
	int	index_final_array;
	char *ptrnull;

	if (!s)
		return (NULL);

	words_number = number_of_words(s, c);
	strings = malloc((words_number + 1) * sizeof(char *));
	if (strings == NULL)
		return (NULL);

	i = 0;
	index_final_array = 0;
	while(s[i])
	{
		if ((s[i] != c) && (s[i - 1] == c || i - 1 == -1))
			start = i;
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			len = (i - start) + 1;
			strings[index_final_array] = ft_substr(s, start, len);
			index_final_array++;
		}
		i++;
	}
	ptrnull = NULL;
	strings[index_final_array] = ptrnull;
	return (strings);
}

// int	main(void)
// {
// 	char str[] = "   hola que  tal  ";
// 	char **result = ft_split(str, ' ');
// 	int	i;
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("String: %s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }