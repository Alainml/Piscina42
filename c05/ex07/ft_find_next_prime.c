/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:33:59 by almirand          #+#    #+#             */
/*   Updated: 2022/03/10 09:59:09 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d", ft_find_next_prime(72));
	return (0);
} */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483629)
		return (2147483647);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
