/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:11:51 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/22 18:38:30 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	check_z(char c)
{
	int	result;

	result = 0;
	if (c <= 'z')
	{
		result = 1;
	}
	return (result);
}

int	check_a(char c)
{
	int	result;

	result = 0;
	if (c >= 'a')
	{
		result = 1;
	}
	return (result);
}

int	ft_str_is_lowercase(char *str)
{
	int	length;
	int	result;

	length = 0;
	result = 1;
	while (str[length] != '\0' && result == 1)
	{
		if (!check_a(str[length]) || !check_z(str[length]))
		{
			result = 0;
		}
		length++;
	}
	if (length == 0)
	{
		result = 1;
	}
	return (result);
}

/*int	main(void)
{
	//char	*myString = "";
	//char	*myString = "Arroz de Sopa";
	char	*myString = "arrozde";
	printf("\n\nResultado = %d", ft_str_is_lowercase(myString));
}*/
