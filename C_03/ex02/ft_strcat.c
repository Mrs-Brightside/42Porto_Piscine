/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:45:07 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/22 12:00:27 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[ii] != '\0')
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

	printf("%s", ft_strcat(dest, src));
	return (0);
}
*/
