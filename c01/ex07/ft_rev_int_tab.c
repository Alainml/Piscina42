/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:39:04 by almirand          #+#    #+#             */
/*   Updated: 2022/02/23 10:12:36 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	cambio;
	int	aux;
	int	i;

	i = 0;
	cambio = size / 2;
	if (size > 1)
	{
		while (cambio > i)
		{
			aux = tab[size - 1];
			tab[size - 1] = tab[i];
			tab[i] = aux;
			i++;
			size--;
		}
	}
}
