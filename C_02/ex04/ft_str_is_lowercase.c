/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:25:44 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/16 19:36:07 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
	{
		return (1);
	}
	while (str [i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z')
		{
			i ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	 main(void)
{
	printf("%d", ft_str_is_lowercase("ABdc"));
}
*/
