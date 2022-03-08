/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:44:47 by almirand          #+#    #+#             */
/*   Updated: 2022/03/03 09:47:02 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2);

int	main(void)
{
	char	str1[10] = "prueba2";
	char	str2[10] = "prueba";

	printf("%d", ft_strcmp(str1, str2));
} */

/* FT_STRCMP(char	*s1, char	*s2)
**
** Compares 2 strings.
** Returning 1 is s1 is greater than s2, -1 if lower and 0 if equal.
*/

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
