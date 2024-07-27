/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:49:42 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/24 14:06:34 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	unsigned int	res;

	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power --;
	}
	if (power < 0)
	{
		return (0);
	}
	return (res);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_power(2, 3));
}
*/
