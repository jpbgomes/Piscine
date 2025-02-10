/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:27:23 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/30 13:15:52 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	d_i;
	int	s_i;
	int	count;

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
	while (count < s_i)
	{
		dest[d_i + count] = src[count];
		count++;
	}
	dest[d_i + count] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	fStr[] = "Arroz";
	char	sStr[] = "Massa";
	printf("%s\n", ft_strcat(fStr, sStr));
}*/
