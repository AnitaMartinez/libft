/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:25:27 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/11 16:46:31 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	int				source_len;
	unsigned int	result_len;

	if (!s)
		return (NULL);
	source_len = ft_strlen(s);
	if (len <= 0 || start > (unsigned int)source_len)
		return (ft_strdup(""));
	result_len = (unsigned int)source_len - start;
	if (result_len < len)
		len = result_len;
	substr = (char *)malloc(len + 1 * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// int main() {
//     char str[] = "banana";
// 	unsigned int start = 4;
// 	size_t size = 3;
// 	printf("%s", ft_substr(str, start, size));
// 	return (0);
// }