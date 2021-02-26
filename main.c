#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *pch;
	char str[] = "Example string";
	pch = (char *)ft_memchr(str, 'b', strlen(str));

	if (pch != NULL)
		printf("'r' found at position %ld. \n", pch - str + 1);
	else
		printf("not found. \n");
	return (0);
}
