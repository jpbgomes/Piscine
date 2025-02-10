/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:38:24 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/20 23:28:18 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = (size - 1);
	while (start <= end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*int	main(void)
{
	int	my_array[5];
	int	i;
	int	*ptr;

	i = 0;
	while (i < 5)
	{
		my_array[i] = i + 1;
		i++;
	}
	printf("Before: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", my_array[i]);
	}
	printf("\n");
	ptr = my_array;
	ft_rev_int_tab(ptr, 5);
	printf("After: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", my_array[i]);
	}
	printf("\n");

	return 0;
}*/
