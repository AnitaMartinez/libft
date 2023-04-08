/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:31:01 by anamartinez       #+#    #+#             */
/*   Updated: 2023/04/06 17:43:41 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

}

// función para hacer la prueba
char to_upper_character(unsigned int indice, char c) // pero no estoy segura de esto, porque no está usando el parámetro indice
{
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	return c;
}

int	main(void)
{

	char *str = "Hola Mundo!";

	printf("%s", ft_strmapi(str, to_upper_character));

	return (0);
}