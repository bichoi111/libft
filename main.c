#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char str1[] = "dmkfd";
	char str2[] = "dmkfd mfkdmkf s";
	printf("memcmp     : %d \n", memcmp(str1, str2, 5));
	printf("ft_ memcmp : %d \n", ft_memcmp(str1, str2, 5));
	write(1, str1, 4);
	printf("\n");
	write(1, str2, 4);
	return (0);
}
