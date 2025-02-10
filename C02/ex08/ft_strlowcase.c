/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_lowcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:34:50 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/25 18:35:01 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
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

/*int main(void)
{
    char myString[] = "ARROZ1";
    printf("%s", ft_strlowcase(myString));
}*/
