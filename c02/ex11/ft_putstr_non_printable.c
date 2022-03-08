/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:18:59 by almirand          #+#    #+#             */
/*   Updated: 2022/03/01 11:24:17 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putstr_non_printable(char	*str);

int	main(void)
{
	char	str[] = "Pru\neba \1, dos \10";

	ft_putstr_non_printable(str);
} */

/*
** Convierte un caracter no printeable en decimal, a su hexadecimal
*/
void	hex(int i)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (i > 16)
	{
		hex(i / 10);
		hex(i % 10);
	}
	else
		write(1, &hexa[i], 1);
}

void	ft_putstr_non_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
			{
				write(1, "0", 1);
			}
			hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
