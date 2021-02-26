#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	while(len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		else
		{
			s++;
			len--;
		}
	}
	return (0);
}
