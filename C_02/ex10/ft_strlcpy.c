/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:23:59 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/17 13:10:42 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	i;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size -1)
		{
			dest [i] = src [i];
			i ++;
		}
		dest [i] = '\0';
	}
	return (x);
}
/*
int	main(void)
{
	char	src[] = "World!";
	char	dest[] = "Hello";

	printf("%d | %s", ft_strlcpy(dest, src, 15), dest);
}
*/
