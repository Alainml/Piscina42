/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:43:23 by almirand          #+#    #+#             */
/*   Updated: 2022/02/28 09:54:31 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strcpy(char	*dest,	char *src);

int main(void)
{
	char src[11] = "hola mundo";
	char dest[11] = "adios";

	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s", dest);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
