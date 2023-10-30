/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:22:48 by mvolkman          #+#    #+#             */
/*   Updated: 2023/09/06 13:11:46 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	int nb = 5;
// 	int power = 3;
// 	int answer = ft_iterative_power(nb, power);
// 	printf("NUMBER: %d", answer);
// 	return (0);
// }
