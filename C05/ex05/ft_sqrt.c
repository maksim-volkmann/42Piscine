/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:41:08 by mvolkman          #+#    #+#             */
/*   Updated: 2023/09/06 13:12:45 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb && i <= 46341)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

// #include <stdio.h>

// int ft_sqrt(int nb);

// int main() {
// 	int num = 2147483647;

// 	int result = ft_sqrt(num);

// 	if (result != 0) {
// 		printf("The square root of %d is %d\n", num, result);
// 	} else {
// 		printf("There is no integer square root for %d\n", num);
// 	}

// 	return 0;
// }
