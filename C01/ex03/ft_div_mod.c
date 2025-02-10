/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:47:55 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/20 23:18:52 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/* int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 30;
	b = 10;
	div = 0;
	mod = 0;

	printf("Antes = %d, %d, %d, %d", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("\nDepois = %d, %d, %d, %d", a, b, div, mod);
} */
