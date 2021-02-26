#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
	char *str1 = "app";
	char *str2 = "adf";
	printf("answer : %d \n", strncmp(str1, str2, 3));
	printf("my     : %d \n", ft_strncmp(str1, str2, 3));	
	
	return 0;
}
