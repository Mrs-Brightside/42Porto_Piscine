/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:01:42 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/23 15:56:50 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i ++;
	}
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			count = -1 * count;
		}
		i ++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = whitespaces(str, &i);
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	res = res * sign;
	return (res);
}
/*
int	main(void)
{
	char	str[] = "   ---+--+1234ab567";

	printf("%d", ft_atoi(str));
}
*/
