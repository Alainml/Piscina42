/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:01:42 by almirand          #+#    #+#             */
/*   Updated: 2022/03/10 09:41:57 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		n = n * nb;
		power--;
	}
	return (n);
}

/* int	main(void)
{
	printf("%d", ft_iterative_power(2, 4));
	return (0);
} */
