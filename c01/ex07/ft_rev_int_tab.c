/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:28:19 by kho-gia           #+#    #+#             */
/*   Updated: 2022/10/18 16:28:21 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	zacatek;
	int	sklad;

	zacatek = 0;
	while (zacatek < size -1)
	{
		sklad = tab[zacatek];
		tab[zacatek] = tab[size - 1];
		tab[size - 1] = sklad;
		zacatek++;
		size--;
	}
}
