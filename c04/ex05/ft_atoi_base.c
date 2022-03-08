/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:04:05 by almirand          #+#    #+#             */
/*   Updated: 2022/03/07 13:23:52 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h>

int	ft_atoi_base(char	*str, char	*base);

int	main(void)
{
	char *base = "0123456789";
	char *str = "122";

	printf("%d", ft_atoi_base(str, base));
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
		return (1);
	while (base[i])
	{
		j = 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_putnbr_base(int nbr, char	*base)
{
	int	length;
	int	num;

	if (check_errors(base) == 0)
	{
		length = ft_strlen(base);
		if (nbr / length)
			ft_putnbr_base((nbr / length), base);
		num = nbr % length;
		return (base[num]);
	}
	return (0);
}

int	find_number(char *str, char	*base)
{
	int	i;
	int	number;

	i = 1;
	number = str[0] - '0';
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = ft_putnbr_base(number, base);
			number = number + str[i] - '0';
		}
		else
			return (number);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	minus;
	int	counter;

	minus = 1;
	counter = 0;
	while (str[counter])
	{
		if (str[counter] == '-')
			minus = -minus;
		if (str[counter] >= '0' && str[counter] <= '9')
			return (find_number(&str[counter], base) * minus);
		counter++;
	}
	return (0);
}
