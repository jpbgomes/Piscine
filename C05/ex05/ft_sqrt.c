/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:03:40 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/02/04 19:03:54 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i) < nb + 1)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(25));
}*/
