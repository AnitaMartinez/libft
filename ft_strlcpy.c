#include <stddef.h>

int	ft_strlen(const char *s);

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t src_length;
	size_t i;

	src_length = ft_strlen(src);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	
	return (src_length);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char dst[50] = NULL;
	char src[] = "";

	char dst1[50] = NULL;


	printf("Oficcial function return: %lu\n", strlcpy(dst, src, 4));
	printf("Official function dst: %s\n", dst);

	printf("My function return: %lu\n", ft_strlcpy(dst1, src, 4));
	printf("My function dst: %s\n", dst1);

	return (0);
}*/
