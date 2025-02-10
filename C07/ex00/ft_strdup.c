/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 22:20:53 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/02/06 22:21:01 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;
	int		k;

	i = 0;
	while (src[i])
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr)
	{
		k = 0;
		while (k < i)
		{
			ptr[k] = src[k];
			k++;
		}
		ptr[k] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}

/*int	main(void)
{
	char	str[] = "ABCDE";
	char	*dup = ft_strdup(str);

	if (dup)
	{
		printf("Duplicated string: %s\n", dup);
		free(dup);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
}*/
