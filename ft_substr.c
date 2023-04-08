/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:25:27 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/08 18:42:51 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	substr = (char *)malloc(len + 1 * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

int main() {
    char str[] = "abcdef";
	printf("%s", ft_substr(str, 2, 3));
	return (0);
}