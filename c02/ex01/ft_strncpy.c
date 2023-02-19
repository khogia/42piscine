/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kho-gia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:08:39 by kho-gia           #+#    #+#             */
/*   Updated: 2022/10/20 13:08:41 by kho-gia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	copy;

	copy = 0;
	while (copy < n && src[copy] != '\0')
	{
		dest[copy] = src[copy];
		copy++;
	}
	while (copy < n)
	{
		dest[copy] = '\0';
		copy++;
	}
	return (dest);
}
