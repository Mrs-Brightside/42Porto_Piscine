/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:49:19 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/18 17:00:06 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		temp;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str [i] != 0)
	{
		if (ft_is_printable(str[i]) == 1)
		{
			write (1, &str[i], 1);
		}
		else
		{
			write (1, "\\", 1);
			temp = str [i] / 16;
			write (1, &hex[temp], 1);
			temp = str [i] % 16;
			write (1, &hex[temp], 1);
		}
		i ++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Ola\nesta bem?");
}
*/
