/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caleman- <caleman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:28:55 by caleman-          #+#    #+#             */
/*   Updated: 2022/07/17 20:03:17 by caleman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void printchar(char num)
{
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		printchar('-');
		ft_putnbr(nb * -1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
        printchar((nb % 10) + '0');
	}
	else
		printchar(nb + '0');
}

int	main (void)
{
	ft_putnbr(-2147483647);
	return (0);
}
