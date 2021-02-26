#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *tmp1;
	const char *tmp2;

	tmp1 = dst;
	tmp2 = src;
	while (*tmp2 != (unsigned char)c && n > 0)
	{
		*(tmp1++) = *(tmp2++);
		n--;
	}
	if (*tmp2 == (unsigned char)c)
	{
		*tmp1 = *tmp2;
		return (tmp1 + 1);
	}
	return (0);
}
