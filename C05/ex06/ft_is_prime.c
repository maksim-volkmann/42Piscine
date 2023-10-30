/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:13:10 by mvolkman          #+#    #+#             */
/*   Updated: 2023/09/06 13:13:06 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	int number = 15;
// 	int number2 = 2147483647;

// 	if (ft_is_prime(number))
// 		printf("%d is prime.\n", number);
// 	else
// 		printf("%d is not prime.\n", number);
// 	return 0;
// }
