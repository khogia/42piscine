#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strcmp.c"

int main()
{
	char s1[] = "first";
	char s2[] = "firs";
	printf("standard c function: %d ", strcmp(s1, s2));
	printf("ft_strcmp: %d ", ft_strcmp(s1, s2));
	return (0);
}