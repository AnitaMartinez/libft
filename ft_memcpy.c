#include <stddef.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	unsigned char *dst_str;
	unsigned char *src_str;

	i = 0;
	dst_str = (unsigned char*) dst;
	src_str = (unsigned char*) src;

	while (i < n)
	{
		dst_str[i] = src_str[i];
		i++;
	}
	return (dst);
}


/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "hola";
	char dest[50] = "adios";
	char dest1[50] = "adios";

	printf("Official function returns: %s\n", memcpy(dest + 1, src, 3));
	printf("Official function: %s\n", dest);

	printf("My function returns: %s\n", ft_memcpy(dest1 + 1, src, 3));
	printf("My function: %s", dest1);
	return (0);
}*/
