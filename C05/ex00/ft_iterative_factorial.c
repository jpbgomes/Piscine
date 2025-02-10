/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:53:25 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/02/04 12:18:37 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	i = nb;
	res = nb;
	while (i > 1)
	{
		res = res * (i - 1);
		i--;
	}
	return (res);
}

/*int main(void)
{
    ft_iterative_factorial(10);
}*/
