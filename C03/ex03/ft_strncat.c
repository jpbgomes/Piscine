/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:27:23 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/30 13:23:29 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_i;
	unsigned int	s_i;
	unsigned int	count;

	d_i = 0;
	s_i = 0;
	count = 0;
	while (src[s_i] != '\0')
	{
		s_i++;
	}
	while (dest[d_i] != '\0')
	{
		d_i++;
	}
	while (count < s_i && count < nb)
	{
		dest[d_i + count] = src[count];
		count++;
	}
	dest[d_i + count] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	fStr[] = "Arroz";
	char	sStr[] = "Massa";
	printf("%s\n", ft_strncat(fStr, sStr));
}*/
