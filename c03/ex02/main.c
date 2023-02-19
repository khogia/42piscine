#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strcat.c"

int main()
{
	char s1[] = "Very";
	char s2[] = "Funny";
	char s3[] = "Very";
	char s4[] = "Funny";
	printf("standard c function: %s ", strcat(s1, s2));
	printf("\nft_strcat: %s ", ft_strcat(s3, s4));
	return(0);
}