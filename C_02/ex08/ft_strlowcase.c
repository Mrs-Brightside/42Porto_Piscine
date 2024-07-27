/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:16:53 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/16 21:27:17 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
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
/*
int	main(void)
{
	char	str[] = "adsSFtvD";

	printf("%s", ft_strlowcase(str));
}
*/
