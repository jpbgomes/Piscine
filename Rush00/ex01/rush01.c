/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:30:45 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/20 19:51:31 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_data(int result)
{
	if (result)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('\\');
	}
}

void	create_y_axis(int xN)
{
	int	yy_count;

	ft_putchar('*');
	if (xN > 1)
	{
		yy_count = 0;
		while (yy_count < (xN - 2))
		{
			ft_putchar(' ');
			yy_count++;
		}
		ft_putchar('*');
	}
}

void	create_x_axis(int xN, int yN, int cyN)
{
	int	x_count;
	int	is_first;

	if (cyN == 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('\\');
	}
	x_count = 1;
	while (x_count < xN)
	{
		if (x_count != (xN - 1))
		{
			ft_putchar('*');
		}
		else
		{
			is_first = (cyN == yN && yN > 1);
			write_data(is_first);
		}
		x_count++;
	}
}

void	rush(int x, int y)
{
	int	y_count;

	y_count = 1;
	while (y_count <= y)
	{
		if (y_count != 1 && y_count != y)
		{
			create_y_axis(x);
		}
		else
		{
			create_x_axis(x, y, y_count);
		}
		ft_putchar('\n');
		y_count++;
	}
}
