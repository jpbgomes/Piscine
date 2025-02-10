/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:36:34 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/01/20 23:29:24 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	c_digit;
	int	temp;
	int	count;

	c_digit = 0;
	while (c_digit <= (size - 1))
	{
		count = 0;
		while (count <= c_digit)
		{
			if (count != 0)
			{
				if (tab[count] < tab[count - 1])
				{
					temp = tab[count];
					tab[count] = tab[count - 1];
					tab[count - 1] = temp;
				}
			}
			count++;
		}
		c_digit++;
	}
}

/*int	main(void)
{
	int	my_array[10] = {34, 7, 23, 89, 12, 56, 19, 67, 45, 15};
	int	*ptr;
	int	i;

	ptr = my_array;
	ft_sort_int_tab(ptr, 10);

	printf("After: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", my_array[i]);
	}
}*/
