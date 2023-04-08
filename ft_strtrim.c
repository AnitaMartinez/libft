/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:17:51 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/08 18:44:14 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_strlen(const char *s);

char *ft_strtrim(char const *s1, char const *set) // No la he terminado
{
	size_t i;
	size_t len;
	char *str;

	if (!s1 || !set)
		return NULL;

	len = ft_strlen(s1);
	str = (char *)s1;
	i = 0;
	while (set[i])
	{
		if (ft_strchr(str, set[i]))
		{
			str = ft_substr(str, i, len);
		}
		i++;
	}

	return (str);
}

// int	main(void)
// {
// 	char s1[] = "AAAAhola,*mundo!***A";
// 	char s2[] = "A*";
// 	printf("%s", ft_strtrim(s1, s2));
// 	return (0);
// }
