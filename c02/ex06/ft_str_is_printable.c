/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:16:29 by almirand          #+#    #+#             */
/*   Updated: 2022/02/28 10:13:46 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int	i;
	char	src[5] = "\1";

	i = ft_str_is_printable(src);
	printf("%d", i);
	return (0);
} */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}
