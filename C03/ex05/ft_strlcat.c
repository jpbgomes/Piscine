/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:54:44 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/30 16:53:49 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_length(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_l;
	unsigned int	src_l;

	dest_l = get_length(dest);
	src_l = get_length(src);
	if (size <= dest_l)
		return (src_l + size);
	if (size > 0)
	{
		i = 0;
		while (i < src_l)
		{
			dest[dest_l + i] = src[i];
			i++;
		}
		if ((dest_l + i) >= size)
			dest[dest_l + (i - 1)] = '\0';
	}
	return (dest_l + src_l);
}

/*#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char dest[] = "Massa";
	char source[] = "Massa";
	// char source[] = "Arroz";

	printf("%d\n", ft_strlcat(dest, "Arroz", 5));
	printf("%s\n\n", dest);

	printf("%zu\n", strlcat(source, "Arroz", 5));
	printf("%s\n", source);
}*/
