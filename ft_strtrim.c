/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:17:51 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/12 16:26:23 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_index_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static int	get_index_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_strchr(set, s1[i]))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	index_begin;
	int	index_end;

	if (!s1 && !set)
		return (NULL);
	index_begin = get_index_start(s1, set);
	index_end = get_index_end(s1, set);
	return (ft_substr(s1, index_begin, index_end + 1 - index_begin));
}

// int	main(void)
// {
// 	char s1[] = "fsabcdef";
// 	char s2[] = "fas";
// 	printf("%s", ft_strtrim(s1, s2));
// 	return (0);
// }
