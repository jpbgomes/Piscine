/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:07:54 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/02/04 21:07:55 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n_div;
	int	i;

	i = 1;
	n_div = 1;
	if (nb < 2)
		return (0);
	while (i <= 9)
	{
		if (((nb % i) == 0) && (i != nb))
			n_div++;
		i++;
	}
	if (n_div > 2)
		return (0);
	else
		return (1);
}

/*int	main(void)
{
	int i = 0;
	while (i < 50)
	{
		printf("%d - %d\n", ft_is_prime(i), i);
		i++;
	}
}*/
