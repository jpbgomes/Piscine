/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 22:58:36 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/02/06 22:58:37 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr)
	{
		i = 0;
		while ((i + min) < max)
		{
			ptr[i] = min + i;
			i++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
/*int	main(void)
{
	int	i;
	int	min = 5;
	int	max = 10;
	int	*range = ft_range(min, max);

	i = 0;
	if (range != NULL)
	{
		while ((i + min) < max)
		{
			printf("%d", range[i]);
			i++;
		}
		free(range);
	}
	else
	{
		printf("MALLOC NULL");
	}
}*/
