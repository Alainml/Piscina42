/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:45:58 by aibikand          #+#    #+#             */
/*   Updated: 2022/03/07 13:07:27 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strstr(char	*str, char	*to_find);
void	print_number(char *dict, char *input);

/* STRLEN
** Returns the length of a string
*/
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

/* POWER
** Returns the power of a number
*/
char	*power(int n_zeros, char *dict)
{
	char	*n_power;
	int		i;

	n_power = malloc ((n_zeros + 1) * sizeof(char));
	n_power[0] = '1';
	i = 1;
	while (n_zeros > 0)
	{
		n_power[i] = '0';
		i++;
		n_zeros--;
	}
	n_power[i] = '\0';
	print_number(dict, n_power);
	return (n_power);
}

/* DECOMPOSE_NUMBER
** Logic to n_zeroside the number in trios and print them
*/
void	decompose_number(char *input, char *dict)
{
	int		n_zeros;
	int		mod;
	int		i;
	int		j;
	char	*num;

	mod = ft_strlen(input) % 3;
	n_zeros = ft_strlen(input) - 1;
	i = 0;
	j = mod;
	while (input[i])
	{
		if (i == mod && n_zeros != 0)
		{
			num[0] = input[i];
			print_number(dict, num);
			power(n_zeros, dict);
			mod = mod + 3;
			i++;
		}
		else
		{
			if (j == 3 && input[i] != '0')
			{
				print_number(dict, num);
				power(2, dict);
				i++;
				n_zeros--;
			}
			else
			{
				if (input[i] == '1')
				{
					num[0] = input[i];
					num[1] = input[i + 1];
					print_number(dict, num);
				}
				else if (input[i] > '1')
				{
					num[0] = input[i];
					num[1] = '0';
					print_number(dict, num);
					if (input[i + 1] != '0')
					{
						num[0] = input[i + 1];
						num[1] = '\0';
						print_number(dict, num);
					}
				}
				n_zeros = n_zeros - 2;
				i = i + 2;
			}
		}
		j = 3;
	}
}

/* PRINT_NUMBER
** Prints the given number (digits) in words
*/
void	print_number(char *dict, char *input)
{
	int	n;

	n = ft_strstr(&dict[0], input);
	n = n + 2;
	while (dict[n] != '\n')
	{
		write(1, &dict[n], 1);
		n++;
	}
}

/* FT_STRSTR
** find a string in another.
*/
int	ft_strstr(char	*str, char	*to_find)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	n = 0;
	while (to_find[n])
		n++;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[j + i] == to_find[j] && to_find[j])
			{
				j++;
			}
			if (j == n)
				return (i + j);
		}
		j = 0;
		i++;
	}
	return (0);
}
