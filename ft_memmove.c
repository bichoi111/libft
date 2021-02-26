#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *d_tmp;
	char s_tmp[len];
	
	i = 0;
	d_tmp = dst;
	ft_memcpy(s_tmp, src, len);
	while (i < len)
	{
		d_tmp[i] = s_tmp[i];
		i++;
	}
	return (dst);
}
