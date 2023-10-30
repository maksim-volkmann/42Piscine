/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:05:08 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/29 18:04:31 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	power;

	power = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb / power >= 10)
	{
		power = power * 10;
	}
	while (power > 0)
	{
		ft_putchar(nb / power + '0');
		nb = nb % power;
		power = power / 10;
	}
}
// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	nb = 2147483647;
// 	ft_putnbr(nb);
// 	write(1, "\n", 1);

// 	int	nb1 = -2147483648;
// 	ft_putnbr(nb1);
// 	write(1, "\n", 1);

// 	int	nb3 = 45;
// 	ft_putnbr(nb3);
// 	write(1, "\n", 1);

// 	// printf("%d\n", INT_MAX);
// 	// printf("%d\n", INT_MIN);
// 	return(0);
// }
