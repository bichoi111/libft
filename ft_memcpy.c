#include "libft.h"
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *tmp1;
	const char *tmp2;

	i = 0;
	tmp1 = dst;
	tmp2 = src;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dst);
}
