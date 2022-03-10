/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:05:39 by almirand          #+#    #+#             */
/*   Updated: 2022/03/09 10:31:19 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		factorial = factorial * (nb - 1);
		nb--;
	}
	return (factorial);
}

/* int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
} */
