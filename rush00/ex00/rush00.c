/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_building_blocks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:20:01 by plouda            #+#    #+#             */
/*   Updated: 2022/10/15 16:28:28 by plouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	corner_building_blocks(int i_row, int i_column, int x, int y)
{
	if (i_row == 1 && i_column == 1)
	{
		ft_putchar('o');
	}
	else if (i_row == 1 && i_column == x)
	{
		ft_putchar('o');
	}
	else if (i_row == y && i_column == 1)
	{
		ft_putchar('o');
	}
	else if (i_row == y && i_column == x)
	{
		ft_putchar('o');
	}
}

void	side_building_blocks(int i_row, int i_column, int x, int y)
{
	if ((i_row == 1) && (i_column > 1 && i_column < x))
	{
		ft_putchar('-');
	}
	else if ((i_column == x) && (i_row > 1 && i_row < y))
	{
		ft_putchar('|');
	}
	else if ((i_row == y) && (i_column > 1 && i_column < x))
	{
		ft_putchar('-');
	}
	else if ((i_column == 1) && (i_row > 1 && i_row < y))
	{
		ft_putchar('|');
	}
	else if ((i_row > 1 && i_row < y) || (i_column > 1 && i_column < x))
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i_row;
	int	i_column;

	i_row = 1;
	while (i_row <= y && (y > 0 && x > 0))
	{
		i_column = 1;
		while (i_column <= x)
		{
			corner_building_blocks(i_row, i_column, x, y);
			side_building_blocks(i_row, i_column, x, y);
			i_column++;
		}
		ft_putchar('\n');
		i_row++;
	}
}
