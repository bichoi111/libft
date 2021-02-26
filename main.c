#include "libft.h"
#include <stdio.h>

int main(void)
{
	int str1[] = {155, 2, 3};
	int str2[3];

	ft_memcpy(str2, str1, sizeof(int) * 3);
	for (int i = 0; i <3 ; i++)
	{
		printf("answer : %d \n", str2[i]);
	}
		//printf("my     : %s \n",ft_memcpy(str1, str2, -1));
	return (0);
}
