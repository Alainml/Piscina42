/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:44:47 by almirand          #+#    #+#             */
/*   Updated: 2022/03/04 11:42:31 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n);

int	main(void)
{
	char	str1[10] = "pr6ueba";
	char	str2[10] = "pr2ueba";
	int		n = 10;

	printf("%d", ft_strncmp(str1, str2, n));
} */

/* FT_STRNCMP(char	*s1, char	*s2, unsigned int n)
**
** Compares two strings until n
** Returning 1 is s1 is greater than s2, -1 if lower and 0 if equal.
*/

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	value;

	i = 0;
	value = 0;
	while ((s1[i] || s2[i]) && value == 0 && i < n)
	{
		value = s1[i] - s2[i];
		i++;
	}
	return (value);
}
