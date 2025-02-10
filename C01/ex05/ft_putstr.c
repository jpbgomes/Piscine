/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:12:27 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/20 23:24:00 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length;
	int	cic_l;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	cic_l = 0;
	while (cic_l < length)
	{
		write(1, &str[cic_l], 1);
		cic_l++;
	}
}

/*int	main(void)
{
	char *myString;
	myString = "Mensagem De Teste";
	ft_putstr(myString);
}*/
