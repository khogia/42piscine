/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:47:55 by kho-gia           #+#    #+#             */
/*   Updated: 2022/10/31 13:47:57 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*str;

	i = 0;
	k = 0;
	str = (char *)malloc(sizeof(strs));
	while (size > i)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		l = 0;
		while (sep[l] != '\0' && i < size - 1)
			str[k++] = sep[l++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
