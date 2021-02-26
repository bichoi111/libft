#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	size_t len;

	len = 0;
	while (dst[len])
		len++;
	if (dstsize < len)
	{
		len = 0;
		while (src[len])
			len++;
		return (len + dstsize);
	}
	while (len + 1 < dstsize && *src)
		dst[len++] = *(src++);
	dst[len] = '\0';
	whlie (*(src++))
		len++;
	return (len);
}
