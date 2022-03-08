/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:37:45 by almirand          #+#    #+#             */
/*   Updated: 2022/03/03 11:54:34 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_atoi(char	*str);

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = ft_atoi(av[1]);
		printf("%d", i);
	}
	return (0);
} */

int	find_number(char *str)
{
	int	i;
	int	number;

	i = 1;
	number = str[0] - '0';
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10;
			number = number + str[i] - '0';
		}
		else
			return (number);
		i++;
	}
	return (number);
}

int	ft_atoi(char	*str)
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
			return (find_number(&str[counter]) * minus);
		counter++;
	}
	return (0);
}
