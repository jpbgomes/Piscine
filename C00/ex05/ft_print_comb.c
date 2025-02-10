/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:51:59 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/18 12:52:21 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_data(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '9')
	{
		y = x +1;
		while (y <= '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_write_data(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
