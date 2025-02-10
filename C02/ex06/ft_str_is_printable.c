/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:44:43 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/23 15:14:57 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	length;
	int	result;

	length = 0;
	result = 1;
	while (str[length] != '\0' && result == 1)
	{
		if (((str[length]) < 32) || ((str[length]) > 126))
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
	char	*myString = "Arroz de Sopa";
	//char	*myString = "ARROZDE";
	printf("\n\nResultado = %d", ft_str_is_printable(myString));
}*/
