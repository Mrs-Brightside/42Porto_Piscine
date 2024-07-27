/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:14:35 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/22 13:24:06 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	if (to_find[ii] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + ii] == to_find[ii] && str[i + ii] != '\0')
		{
			ii ++;
		}
		if (to_find[ii] == '\0')
		{
			return (str + i);
		}
		i ++;
		ii = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] = "DEF GHI ABC JKL";
	char to_find[] = "ABC";

	printf("%s", ft_strstr(str, to_find));
}
*/
