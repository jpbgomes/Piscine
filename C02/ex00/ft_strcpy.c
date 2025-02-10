/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 00:13:11 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/23 16:03:23 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	length;

	length = 0;
	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}

/*int	main(void)
{
	char finalString[] = "ARROZ";
	char myString[] = "DE MASSA";

	printf("Before: %s / %s", finalString, myString);
	ft_strcpy(finalString, myString);
	printf("\nAfter: %s / %s", finalString, myString);
}*/
