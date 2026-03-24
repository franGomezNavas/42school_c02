/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:59:58 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/10 18:47:39 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;
	char	*str3;

	str = "hola";
	str2 = "123";
	str3 = "";
	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
	return (0);
}
*/
