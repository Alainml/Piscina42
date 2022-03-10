/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:18:11 by almirand          #+#    #+#             */
/*   Updated: 2022/03/10 10:02:13 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("%d", ft_sqrt(100));
	return (0);
} */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 2147483641)
		return (0);
	while (i * i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
