/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:57:17 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/30 10:04:39 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (i < ac)
	{
		while (av[ac - i][x] != '\0')
		{
			write(1, &av[ac - i][x], 1);
			x++;
		}
		i++;
		x = 0;
		write(1, "\n", 1);
	}
	return (0);
}
