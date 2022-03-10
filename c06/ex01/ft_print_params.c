/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:11:51 by almirand          #+#    #+#             */
/*   Updated: 2022/03/08 18:17:27 by almirand         ###   ########.fr       */
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

	i = 1;
	while (i < ac)
	{
		length = ft_strlen(av[i]);
		write(1, av[i], length);
		write(1, "\n", 1);
		i++;
	}
}
