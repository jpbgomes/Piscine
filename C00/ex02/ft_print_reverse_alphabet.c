/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:48:02 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/18 12:48:50 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	cl;

	cl = 'z';
	while (cl >= 'a')
	{
		write(1, &cl, 1);
		cl--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
