/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamart3 <anamart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:49:03 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/26 19:41:53 by anamart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// int main(void)
// {
//     int fd = 1;
// 	ft_putchar_fd('a', fd);

// 	int fdFile = open("file.txt", O_WRONLY);
// 	ft_putchar_fd('h', fdFile);
// 	return (0);
// }