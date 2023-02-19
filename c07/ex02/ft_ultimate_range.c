/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:24:38 by kho-gia           #+#    #+#             */
/*   Updated: 2022/10/31 12:24:39 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	i = max - min;
	res = malloc(sizeof(int) * (i));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	i = 0;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	} 	
	return (i);
}
