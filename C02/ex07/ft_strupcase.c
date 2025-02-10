/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:38:16 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/23 15:03:28 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		if (str[length] <= 'z' && str[length] >= 'a')
		{
			str[length] = str[length] - 32;
		}
		length++;
	}
	return (str);
}

/*int main(void)
{
    char myString[] = "arroz1";
    printf("%s", ft_strupcase(myString));
}*/
