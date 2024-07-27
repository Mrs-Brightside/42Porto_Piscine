/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 23:13:49 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/23 23:26:43 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb --;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}
/*
int	main (void)
{
	printf("%i", ft_iterative_factorial(3));
}
*/
