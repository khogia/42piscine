/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:13:01 by kho-gia           #+#    #+#             */
/*   Updated: 2022/10/12 21:13:08 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	zpis;

	zpis = 'z';
	while (zpis >= 'a')
	{
		write(1, &zpis, 1);
		zpis--;
	}
}
