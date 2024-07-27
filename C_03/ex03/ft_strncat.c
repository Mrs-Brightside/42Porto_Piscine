/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:01:47 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/22 12:11:59 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	ii;

	i = 0;
	ii = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (ii < nb && src[ii] != '\0')
	{
		dest[i] = src[ii];
		i ++;
		ii ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Hello ";
	char	src[] = "World!";

	printf("%s", ft_strncat(dest, src, 5));
}
*/
