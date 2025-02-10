/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:37:29 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/20 23:13:33 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	trader;

	trader = *a;
	*a = *b;
	*b = trader;
}

/*int	main(void)
{
	int a;
	int b;

	a = 5;
	b = 10;
	printf("Antes = %d, %d", a, b);
	ft_swap(&a, &b);
	printf("\nDepois = %d, %d", a, b);
}*/
