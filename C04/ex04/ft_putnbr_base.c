/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:16:32 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/02/04 11:41:33 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	has_double(int l, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < l)
	{
		j = 0;
		while (j < l)
		{
			if (str[j] == str[i] && j != i)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		bl;

	nb = nbr;
	bl = 0;
	while (base[bl])
	{
		if (base[bl] == '-' || base[bl] == '+')
			return ;
		bl++;
	}
	if (bl < 2 || has_double(bl, base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= bl)
		ft_putnbr_base((nb / bl), base);
	ft_putchar(base[nb % bl]);
}

/*int	main(void)
{
	ft_putnbr_base(42, "poneyvif");
}*/
