/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamartinez <anamartinez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:09:22 by anamart3          #+#    #+#             */
/*   Updated: 2023/04/13 19:27:04 by anamartinez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main(void)
// {
// 	int i;
// 	int n;
// 	int *a;

// 	printf("Number of elements to be entered:");
// 	scanf("%d",&n);

// 	a = (int *)ft_calloc(n, sizeof(int));

// 	printf("Enter %d numbers:\n",n);

// 	for( i=0 ; i < n ; i++ ) {
//       scanf("%d",&a[i]);
//    	}

// 	printf("The numbers entered are: ");
// 	for( i=0 ; i < n ; i++ ) {
//       printf("%d ",a[i]);
//    	}

//    	free( a );

// 	return (0);
// }