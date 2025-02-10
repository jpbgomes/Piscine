/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:23:45 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/02/04 21:23:55 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	number;

	if (nb <= 2)
		return (2);
	number = nb;
	while (1)
	{
		i = 2;
		while (i * i <= number)
		{
			if (number % i == 0)
				break ;
			i++;
		}
		if (i * i > number)
			return (number);
		number++;
	}
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(48));
}*/
