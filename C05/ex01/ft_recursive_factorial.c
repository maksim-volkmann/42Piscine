/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:10:15 by mvolkman          #+#    #+#             */
/*   Updated: 2023/09/04 19:18:20 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
// #include <stdio.h>

// int ft_recursive_factorial(int nb);

// int main() {
// 	int number = 6;

// 	if (number < 0) {
// 		printf("Factorial is undefined for negative numbers.\n");
// 	} else {
// 		int factorial = ft_recursive_factorial(number);
// 		printf("%d! = %d\n", number, factorial);
// 	}

// 	return 0;
// }
