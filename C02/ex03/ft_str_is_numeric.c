/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:03:26 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/22 18:04:09 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	length;
	int	result;

	length = 0;
	result = 1;
	while (str[length] != '\0' && result == 1)
	{
		if (str[length] < '0' || str[length] > '9')
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
	char	*myString = "152";
	printf("\n\nResultado = %d", ft_str_is_numeric(myString));
}*/
