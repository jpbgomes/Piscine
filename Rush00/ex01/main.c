/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:30:45 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/19 14:42:41 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	toint(char val[])
{
	int	length;
	int	final;
	int	cic_l;

	final = 0;
	cic_l = 0;
	length = 0;
	while (val[length] != '\0')
	{
		length++;
	}
	while (cic_l < length)
	{
		if (cic_l == 0)
		{
			final = final + val[cic_l] - '0';
		}
		else
		{
			final = (final * 10) + val[cic_l] - '0';
		}
		cic_l++;
	}
	return (final);
}

int	main(int ac, char **av)
{
	char	*error_missing;
	char	missing_arg;
	int		int_comp;
	int		int_alt;

	if (av[1] == NULL || av[2] == NULL)
	{
		error_missing = "Error: Missing Arguments = ";
		missing_arg = ac + '0';
		write(1, error_missing, 29);
		write(1, &missing_arg, 1);
		return (0);
	}
	int_comp = toint (av[1]);
	int_alt = toint (av[2]);
	rush (int_comp, int_alt);
	return (0);
}
