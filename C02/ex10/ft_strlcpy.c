/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:16:36 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/25 16:47:49 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	src_length;

	length = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size > 0)
	{
		while (src[length] != '\0' && length < size - 1)
		{
			dest[length] = src[length];
			length++;
		}
		dest[length] = '\0';
	}
	return (src_length);
}

/*#include <stdio.h>

int	main(void)
{
	char myString[] = "DE MASSA";
	char finalString[] = "ARROZ";

	printf("Before: %s", finalString);
	ft_strlcpy(finalString, myString, 5);
	printf("\nAfter: %s", finalString);
}*/
