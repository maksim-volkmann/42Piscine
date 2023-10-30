/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:03:08 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/30 10:06:10 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (av[0][i] != '\0')
	{
		write (1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	(void)ac;
	return (0);
}
