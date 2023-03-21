#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	
}

/*#include <strings.h>
#include <stdio.h>

int main(void)
{
	char str[] = "hola";
	char str1[] = "hola";

	bzero(str, 1);
	printf("Official function: %s\n", str + 2);
	ft_bzero(str1, 1);
	printf("My function: %s", str1 + 2);	
	return (0);
}*/
