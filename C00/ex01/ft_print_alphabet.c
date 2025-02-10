/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:46:00 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/18 12:47:15 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	cl;
	int		alpha_len;

	cl = 'a';
	alpha_len = 1;
	while (alpha_len < 27)
	{
		alpha_len++;
		write(1, &cl, 1);
		cl++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/
