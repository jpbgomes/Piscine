/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:56:00 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/22 19:41:29 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	length;

	length = 0;
	while (src[length] != '\0' && length < n)
	{
		dest[length] = src[length];
		length++;
	}
	while (length < n)
	{
		dest[length] = '\0';
		length++;
	}
	return (dest);
}

/*int	main(void)
{
	char finalString[] = "A";
	char myString[] = "ARROZ DE MASSA";

	printf("Before: %s / %s", finalString, myString);
	ft_strncpy(finalString, myString, 5);
	printf("\nAfter: %s / %s", finalString, myString);
}*/
