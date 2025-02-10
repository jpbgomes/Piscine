/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:50:13 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/25 16:14:49 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	length;
	int	result;

	length = 0;
	result = 1;
	while (str[length] != '\0')
	{
		if ((str[length] > 'z' || str[length] < 'a')
			&& (str[length] > 'Z' || str[length] < 'A'))
		{
			return (0);
		}
		length++;
	}
	return (result);
}

/*int	main(void)
{
	// char	*myString = "";
	// char	*myString = "Arroz de Sopa";
	// char	*myString = "ArrozdeSopa";
	char	*myString = "Ar1rozdeSopa";
	printf("Resultado = %d", ft_str_is_alpha(myString));
}*/
