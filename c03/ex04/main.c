#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strstr.c"

int main()
{
	char s1[] = "Thisis";
	char s2[] = "his";
	printf("my: %s ", ft_strstr(s1, s2));
	printf("standard c function: %s ", strstr(s1, s2));
	return(0);
}