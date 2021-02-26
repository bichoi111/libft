#include "libft.h"
#include <stdio.h>

int main(void)
{
	//char dst[] = "GeeksForGeeks is for programming geeks";
	char dst[] = "";
	char src[] = "hi hello";
	
	char *ret = ft_memccpy(dst + 14, src, 'l', 0);
	printf("full sentence : %s \n", dst);
	printf("return        : %s \n", ret);
	//printf("answer : %s \n", memccpy(dst, src,'o', 6));
	//printf("my     : %s \n", ft_memccpy(dst, src,'o', 6));
	return (0);
}
