/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:10:29 by anamart3          #+#    #+#             */
/*   Updated: 2023/05/05 13:52:42 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		str_length;

	str_length = (int)ft_strlen(s1);
	dst = (char *)malloc(str_length + 1 * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, (const char *)s1, str_length + 1);
	return (dst);
}

// #include <string.h>
// int main(void)
// {
// 	char str[] = "hola";
// 	char *my_result = ft_strdup(str);
// 	char *official_result = strdup(str);
// 	printf("my_result: %s\n", my_result);
// 	printf("official_result: %s\n", official_result);
// 	free(my_result);
// 	free(official_result);
// 	return (0);
// }