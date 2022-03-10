/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:37:45 by almirand          #+#    #+#             */
/*   Updated: 2022/03/08 11:59:39 by almirand         ###   ########.fr       */
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

int	ft_atoi(char	*str)
{
	int	minus;
	int	n;
	int	i;

	minus = 1;
	n = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	n = n * minus;
	return (n);
}
