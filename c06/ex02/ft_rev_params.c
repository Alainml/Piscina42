/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:15:34 by almirand          #+#    #+#             */
/*   Updated: 2022/03/08 18:17:33 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int ac, char **av)
{
	int	i;
	int	length;

	i = 0;
	ac--;
	while (i < ac)
	{
		length = ft_strlen(av[ac]);
		write(1, av[ac], length);
		write(1, "\n", 1);
		ac--;
	}
}
