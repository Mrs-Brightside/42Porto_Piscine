/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:07:36 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/24 14:17:38 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	unsigned int	res;

	res = 1;
	if (power > 0)
	{
		res = ft_recursive_power(nb, power - 1) * nb;
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
	printf("%i", ft_recursive_power(2, 3));
}
*/
