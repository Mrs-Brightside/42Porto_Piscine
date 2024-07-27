/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:25:17 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/22 16:52:55 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_src_lenght(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ii;
	unsigned int	srcl;
	unsigned int	destl;

	i = 0;
	ii = 0;
	while (dest[i] != '\0')
		i ++;
	destl = i;
	srcl = ft_src_lenght(src);
	if (size == 0 || size <= destl)
	{
		return (srcl + size);
	}
	while (src[ii] != '\0' && ii < size - destl - 1)
	{
		dest[i] = src[ii];
		i ++;
		ii ++;
	}
	dest[i] = '\0';
	return (srcl + destl);
}
/*
int	main(void)
{
	char	dest[] = "Hello ";
	char	src[] = "World!";

	printf("%d, %s", ft_strlcat(dest, src, 13), dest);
}
*/
