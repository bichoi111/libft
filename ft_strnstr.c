#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *h_tmp;
	const char *n_tmp;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		if (*haystack == *needle)
		{
			h_tmp = haystack;
			n_tmp = needle;
			while (*h_tmp == *n_tmp && *h_tmp && *n_tmp && len > 0)
			{
				h_tmp++;
				n_tmp++;
				len--;
			}
			if (*n_tmp == '\0' && len >= 0)
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
