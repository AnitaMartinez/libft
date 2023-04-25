/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:48:54 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/25 20:31:56 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_of_words(char const *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		if ((*s != c) && (*(s + 1) == c || *(s + 1) == '\0'))
			n++;
		s++;
	}
	return (n);
}

static char	**free_all(char **strings)
{
	unsigned int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (NULL);
}

static char	*get_next_word(char const *s, char c, int *i)
{
	char	*word;
	int		start;
	int		len;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		words_number;
	int		i;
	int		i_final_array;

	if (!s)
		return (NULL);
	words_number = number_of_words(s, c);
	strings = (char **)malloc(sizeof(char *) * (words_number + 1));
	if (!strings)
		return (NULL);
	i = 0;
	i_final_array = 0;
	while (i_final_array < words_number)
	{
		strings[i_final_array] = get_next_word(s, c, &i);
		if (!strings[i_final_array])
			return (free_all(strings));
		i_final_array++;
	}
	strings[i_final_array] = NULL;
	return (strings);
}

// int	main(void)
// {
// 	char str[] = ",,,hola,que,,tal,,";
// 	char **result = ft_split(str, ',');
// 	int	i;
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("String: %s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }