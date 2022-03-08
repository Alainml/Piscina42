/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:57:25 by almirand          #+#    #+#             */
/*   Updated: 2022/02/22 14:22:59 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_codigo(int cont1, int cont2, int cont3)
{
	if (cont3 > cont2 && cont2 > cont1)
	{
		ft_putchar(cont1);
		ft_putchar(cont2);
		ft_putchar(cont3);
		if (cont1 != 55)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	cont1;
	int	cont2;
	int	cont3;

	cont1 = 48;
	cont2 = 48;
	cont3 = 48;
	while (cont1 <= 57)
	{
		cont2 = cont1 + 1;
		while (cont2 <= 57)
		{
			cont3 = cont2 +1;
			while (cont3 <= 57)
			{
				ft_print_codigo(cont1, cont2, cont3);
				cont3++;
			}
			cont2++;
		}
		cont1++;
	}
}
