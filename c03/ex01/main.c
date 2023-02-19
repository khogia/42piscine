
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strncmp.c"

int main()
{
	char s1[] = "Martin";
	char s2[] = "Rice";
	printf("standard c function: %d ", strncmp(s1, s2, 3));
	printf("ft_strcmp: %d ", ft_strncmp(s1, s2, 3));
	return(0);
}