/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generatenumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilopez- <dilopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:32:46 by dilopez-          #+#    #+#             */
/*   Updated: 2022/02/27 19:27:34 by dilopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_generate_numbers(void);
void	ft_combnumbers(int *counter, char **combnumbers);
void	ft_coordinates(int *n, int *counter, char **combnumbers);
int		ft_generate_left(int *n);
int		ft_generate_right(int *n);
char	*ft_strcpy(char *dest, char *src);

/*
** Creates a 24x6 table with all combinations and its vistas.
*/
char	*ft_generate_numbers(void)
{
	int		counter;
	char	**combnumbers;
	int		i;

	combnumbers = malloc(24 * sizeof(char *));
	i = 0;
	while (i < 24)
		combnumbers[i++] = malloc(6);
	counter = -1;
	ft_combnumbers(&counter, combnumbers);
	return (*combnumbers);
}

/*
** for each combination, looks its vistas.
*/
void	ft_combnumbers(int *counter, char **combnumbers)
{
	int	i;
	int	n[4];

	i = -1;
	while (i++ < 4)
		n[i] = 0;
	while (n[0]++ < 4)
	{
		n[1] = 0;
		while (n[1]++ < 4)
		{
			n[2] = 0;
			while (n[2]++ < 4)
			{
				n[3] = 0;
				while (n[3]++ < 4)
				{
					if (n[0] != n[1] && n[0] != n[2] && n[0] != n[3]
						&& n[1] != n[2] && n[1] != n[3] && n[2] != n[3])
						ft_coordinates(n, counter, combnumbers);
				}
			}
		}
	}
}

/*
** Finds the vistas of a combination
*/
void	ft_coordinates(int *n, int *counter, char **combnumbers)
{
	int		left;
	int		right;
	int		i;
	char	str[6];

	*counter = *counter + 1;
	left = ft_generate_left(n);
	right = ft_generate_right(n);
	str[0] = left + '0';
	str[1] = right + '0';
	i = 1;
	while (i++ < 5)
		str[i] = n[i - 2] + '0';
	ft_strcpy(combnumbers[*counter], str);
}

/*
** Returns the left vista for line, or upper for column.
*/
int	ft_generate_left(int *n)
{
	int	i;
	int	left;
	int	max_left;

	i = -1;
	max_left = 0;
	left = 0;
	while (i++ < 4)
	{
		if (max_left < n[i])
		{
			max_left = n[i];
			left++;
		}
	}
	return (left);
}

/*
** Returns the right vista for line, or lower for column.
*/
int	ft_generate_right(int *n)
{
	int	i;
	int	right;
	int	max_right;

	i = 4;
	max_right = 0;
	right = 0;
	while (i-- > 0)
	{
		if (max_right < n[i])
		{
			max_right = n[i];
			right++;
		}
	}
	return (right);
}
