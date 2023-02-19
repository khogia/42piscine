/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:57:26 by kho-gia           #+#    #+#             */
/*   Updated: 2022/10/25 15:57:27 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		ft_putchar(argv[j][i]);
		i++;
		if (argv[j][i] == '\0')
		{
			j++;
			ft_putchar('\n');
			i = 0;
		}
	}
	return (0);
}
