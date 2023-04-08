/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:15:03 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/08 18:43:58 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
	{
		if (i < (n -1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <string.h>
//  int main(void)
//  {
// 	char s1[] = "test\200";
// 	char s2[] = "test\0";
// 	size_t n = 6;
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d", strncmp(s1, s2, n));
// 	return (0);
//  }
