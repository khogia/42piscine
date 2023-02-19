#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strncat.c"

int main()
{
	char s1[] = "This";
	char s2[] = "Is";
	char s3[] = "This";
	char s4[] = "Is";
	printf("standard c function: %s ", strncat(s1, s2, 2));
	printf("\nft_strncat: %s ", ft_strncat(s3, s4, 2));
	return(0);
}