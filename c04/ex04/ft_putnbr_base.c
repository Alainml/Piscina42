/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:29:01 by almirand          #+#    #+#             */
/*   Updated: 2022/03/07 13:23:26 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putnbr_base(int nbr, char	*base);

int	main(void)
{
	char *base = "0123456789";

	ft_putnbr_base(12, base);
} */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_errors(char *base)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (0);
	while (base[i])
	{
		j = 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char	*base)
{
	int	length;
	int	num;

	if (check_errors(base) == 0)
	{
		length = ft_strlen(base);
		if (nbr / length)
			ft_putnbr_base((nbr / length), base);
		num = nbr % length;
		write(1, &base[num], 1);
	}
}
