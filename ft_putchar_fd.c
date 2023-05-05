/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:49:03 by anamartinez       #+#    #+#             */
/*   Updated: 2023/05/05 13:52:17 by anamartinez      ###   ########.fr       */
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