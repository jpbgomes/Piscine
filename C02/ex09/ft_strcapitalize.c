/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:38:16 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/25 16:23:43 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_simbol(char c)
{
	int	result;

	result = 0;
	if (!(c >= 'A' && c <= 'Z')
		&& !(c >= 'a' && c <= 'z')
		&& !(c >= '0' && c <= '9'))
	{
		result = 1;
	}
	return (result);
}

char	*ft_lowstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		if (str[length] <= 'Z' && str[length] >= 'A')
		{
			str[length] = str[length] + 32;
		}
		length++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		length;
	char	*low_c;

	low_c = ft_lowstr(str);
	length = 0;
	while (str[length] != '\0')
	{
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] = str[0] - 32;
		else if (ft_is_simbol(str[length]))
		{
			if (str[length + 1] <= 'z' && str[length + 1] >= 'a')
			{
				str[length + 1] = str[length + 1] - 32;
			}
		}
		length++;
	}
	return (str);
}

/*int	main(void)
{
    char myString[] = "ola, tUdo bem? 42palAvras e-duas; cinquEnta+e+uM";
    printf("%s", ft_strcapitalize(myString));
}*/
