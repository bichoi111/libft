#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *tmp1;
	const unsigned char *tmp2;

	tmp1 = (const unsigned char *)s1;
	tmp2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*tmp1 == *tmp2)
		{
			tmp1++;
			tmp2++;
			n--;
		}
		else
			return (*tmp1 - *tmp2);
	}
	return (0);
}

