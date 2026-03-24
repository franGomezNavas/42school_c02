/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:49:18 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/16 13:16:27 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	str2 = "HOLA";
	str3 = "";
	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	return (0);
}
*/
