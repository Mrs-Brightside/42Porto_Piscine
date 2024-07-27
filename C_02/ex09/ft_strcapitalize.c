/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:29:29 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/16 22:22:10 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_to_lower_case(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 'A' && str [i] <= 'Z')
		{
			str [i] += 32;
		}
		i ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capnext;

	i = 0;
	capnext = 1;
	ft_to_lower_case(str);
	while (str [i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z')
		{
			if (capnext == 1)
				str[i] -= 32;
			capnext = 0;
		}
		else if (str [i] >= '0' && str [i] <= '9')
			capnext = 0;
		else
			capnext = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarente-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
}
*/
