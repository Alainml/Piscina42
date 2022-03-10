/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:14:57 by almirand          #+#    #+#             */
/*   Updated: 2022/03/10 09:54:49 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/* int	main(void)
{
	printf("%d", ft_recursive_power(2, 5));
	return (0);
} */
