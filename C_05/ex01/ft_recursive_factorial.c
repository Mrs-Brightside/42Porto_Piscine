/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 23:28:54 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/24 12:44:44 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb > 0)
	{
		res = nb * (ft_recursive_factorial(nb - 1));
		nb = nb - 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}
/*
int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}
*/
