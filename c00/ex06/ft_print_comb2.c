/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:56:52 by almirand          #+#    #+#             */
/*   Updated: 2022/02/22 14:26:59 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	par0;
	int	par1;

	par0 = 0;
	par1 = 1;
	while (par0 <= 98)
	{
		par1 = par0 + 1;
		while (par1 <= 99)
		{
			ft_putchar((par0 / 10) + '0');
			ft_putchar((par0 % 10) + '0');
			write(1, " ", 1);
			ft_putchar((par1 / 10) + '0');
			ft_putchar((par1 % 10) + '0');
			if (par0 != 98 || par1 != 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
		par1++;
		}
	par0++;
	}
}
