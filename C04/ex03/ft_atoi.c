/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:21:26 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/29 17:57:16 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n_cnt;
	int	result;

	i = 0;
	n_cnt = 0;
	result = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n_cnt++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	if (n_cnt % 2 != 0)
		result *= -1;
	return (result);
}

// #include <stdio.h>

// int main(int argc, char *argv[]) {
// 	if (argc != 2) {
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return 1;
// 	}

// 	int result = ft_atoi(argv[1]);
// 		printf("Converted integer: %d\n", result);

// 	return 0;
// }
