/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:08:16 by almirand          #+#    #+#             */
/*   Updated: 2022/02/28 10:01:15 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int	i;
	char	src[5] = "hola";

	i = ft_str_is_alpha(src);
	printf("%d", i);
	return (0);
}
 */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || ('Z' < str[i] && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
