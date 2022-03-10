/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:29:01 by almirand          #+#    #+#             */
/*   Updated: 2022/03/08 13:16:02 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putnbr_base(int nbr, char	*base);

int	main(void)
{
	char *base = "0123456789";

	ft_putnbr_base(3, base);
} */

void	ft_test_base(char *base, int *test)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*test = 1;
	while (base[i] && *test == 0)
	{
		j = i;
		while (base[j])
		{
			j++;
			if (base[i] == base[j])
				*test = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*' || base[i] == '='
			|| base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*test = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char	*base)
{
	int		i;
	int		test;
	long	nb;

	i = 0;
	test = 0;
	ft_test_base(base, &test);
	nb = nbr;
	if (test == 0)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		while (base[i])
			i++;
		if (nb < i)
			write(1, &base[nb], 1);
		if (nb >= i)
		{
			ft_putnbr_base(nb / i, base);
			ft_putnbr_base(nb % i, base);
		}
	}
}
