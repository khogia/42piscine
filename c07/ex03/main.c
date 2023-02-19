#include <stdlib.h>
#include <stdio.h>
#include "ft_strjoin.c"

int main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "ahoj";
	strs[1] = "12345";
	strs[2] = "kockopes";
	strs[3] = "4321";
	separator = "";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}