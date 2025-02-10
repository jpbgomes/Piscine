/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:01:28 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/02/03 13:06:11 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	get_pos(char *str, char *to_find, int i, int fl)
{
	int	c;
	int	j;

	c = 0;
	j = 0;
	while (str[i + j] == to_find[j])
	{
		if (j == (fl - 1))
			c = i;
		j++;
	}
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;
	int	fl;

	i = 0;
	fl = 0;
	c = -1;
	fl = get_length(to_find);
	if (fl == 0)
		return (str);
	else
	{
		while (str[i])
		{
			if (str[i] == to_find[0])
			{
				c = get_pos(str, to_find, i, fl);
			}
			i++;
		}
		return (str + c);
	}
	return (NULL);
}

/*int	main(void)
{
	char	myStr[] = "Ola, eu sou o ze";
	printf("%s", ft_strstr(myStr, "sou"));
	// printf("%s", ft_strstr(myStr, ""));
}*/
