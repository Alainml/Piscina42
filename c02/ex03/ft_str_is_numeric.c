/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:48:18 by almirand          #+#    #+#             */
/*   Updated: 2022/02/28 10:03:07 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int	i;
	char	src[5] = "124";

	i = ft_str_is_numeric(src);
	printf("%d", i);
	return (0);
} */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('0' > str[i] || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
