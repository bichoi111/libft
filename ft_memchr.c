#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *ret;

	ret = (const char *)s;
	while (n-- > 0)
	{
		if (*ret == (unsigned char)c)
			return ((void *)ret);
		ret++;
	}
	return (0);
}
