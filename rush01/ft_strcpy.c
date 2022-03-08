/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilopez- <dilopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:03:11 by dilopez-          #+#    #+#             */
/*   Updated: 2022/02/27 19:28:27 by dilopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies an array to another.
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	loop;

	loop = 0;
	while (loop < 6)
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}
