/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:49:18 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/18 12:49:35 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	current_num;

	current_num = '0';
	while (current_num <= '9')
	{
		write(1, &current_num, 1);
		current_num++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
}
*/
