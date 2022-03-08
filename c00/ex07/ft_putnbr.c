/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:52:56 by almirand          #+#    #+#             */
/*   Updated: 2022/02/23 10:35:38 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * (-1);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + '0');
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
