/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:57:38 by kho-gia           #+#    #+#             */
/*   Updated: 2022/10/19 14:57:40 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	zacatek;
	int	sklad;

	while (size >= 0)
	{
		zacatek = 0;
		while (zacatek < size - 1)
		{
			if (tab[zacatek] > tab[zacatek + 1])
			{
				sklad = tab [zacatek];
				tab[zacatek] = tab [zacatek + 1];
				tab [zacatek + 1] = sklad;
			}
			zacatek++;
		}
		size--;
	}
}
