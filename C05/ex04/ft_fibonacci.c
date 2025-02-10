/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:10:57 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/02/04 17:11:07 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;
	int	last;
	int	blast;
	int	n;

	last = 1;
	blast = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	i = 0;
	while (i < index - 1)
	{
		n = last + blast;
		blast = last;
		last = n;
		i++;
	}
	return (n);
}

/*int main(void)
{
    printf("%d\n", ft_fibonacci(3));
}*/
