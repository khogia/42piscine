/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:15:27 by kho-gia           #+#    #+#             */
/*   Updated: 2022/10/31 12:15:28 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = max - min;
	res = (int *)malloc(sizeof(int) * (i));
	if (min >= max)
		return (0);
	if (res == NULL)
		return (0);
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
