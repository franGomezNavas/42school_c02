/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:21:52 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/18 19:12:08 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
int	main(void)
{
	char	*str;
	char	*str2;
	char 	*str3;

	str = "España";
	str2 = "";
	str3 = "!#&+";
	ft_str_is_printable(str);
	printf ("Ñ caracter no printable, %d\n", ft_str_is_printable(str));
	ft_str_is_printable(str2);
	printf ("Vacío es %d\n", ft_str_is_printable(str2));
	ft_str_is_printable(str3);
	printf ("Caracteres es %d\n", ft_str_is_printable(str3));
	return (0);
}
*/