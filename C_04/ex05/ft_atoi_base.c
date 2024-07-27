/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:07:52 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/23 20:09:07 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_find_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127
			|| base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			count = -1 * count;
		}
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	num_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	i;
	int	valid_base;

	res = 0;
	sign = whitespaces(str, &i);
	if (ft_find_error(base) != 0)
	{
		valid_base = num_base(str[i], base);
		while (str[i] != '\0' && num_base(str[i], base) != -1)
		{
			res = res * ft_find_error(base) + valid_base;
			i++;
			valid_base = num_base(str[i], base);
		}
		return (res *= sign);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi_base("   +++-152987", "0123456789"));
	printf("%d\n", ft_atoi_base("    +--010101", "01"));
	printf("%d\n", ft_atoi_base("   +-5652", "0123456789abcdef"));
}
*/
