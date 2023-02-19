/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:16:14 by kho-gia           #+#    #+#             */
/*   Updated: 2022/10/22 18:16:15 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	faktorial;
	int	i;

	faktorial = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i < nb + 1)
	{
		faktorial = faktorial * i++;
	}
	return (faktorial);
}
