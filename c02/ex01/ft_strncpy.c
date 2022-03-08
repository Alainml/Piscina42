/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:20:29 by almirand          #+#    #+#             */
/*   Updated: 2022/03/05 12:36:54 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			src[11] = "";
	char			dest[15] = "prueba";
	unsigned int	n = 4;

	printf("%s\n", dest);
	ft_strncpy(dest, src, n);
	printf("%s", dest);
	return (0);
} */

char	*ft_strncpy(char *dest, char	*src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
