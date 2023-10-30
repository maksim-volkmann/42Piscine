/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:01:35 by mvolkman          #+#    #+#             */
/*   Updated: 2023/09/04 19:09:44 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
// #include <stdio.h>

// int main() {
// 	int number = 10; // Change the number to the value you want to test

// 	if (number < 0) {
// 		printf("Factorial is undefined for negative numbers.\n");
// 	} else {
// 		int factorial = ft_iterative_factorial(number);
// 		printf("%d! = %d\n", number, factorial);
// 	}

// 	return 0;
// }
