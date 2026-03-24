/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:10:53 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/10 18:26:52 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
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
	str2 = "hola123";
	str3 = "";
	ft_str_is_alpha(str);
	printf("%d\n", ft_str_is_alpha(str));
	ft_str_is_alpha(str2);
	printf("%d\n", ft_str_is_alpha(str2));
	ft_str_is_alpha(str3);
	printf("%d\n", ft_str_is_alpha(str3));
	return (0);
}
*/
