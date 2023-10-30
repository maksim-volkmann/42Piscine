/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:22:04 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/26 16:33:23 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int main(void) {
// 	char test1[] = "Hello";
// 	char test2[] = "Hello, World!";
// 	char test3[] = "12345";
// 	char test4[] = "alphaBeta";
// 	char test5[] = "";

// 	int result1 = ft_str_is_alpha(test1);
// 	int result2 = ft_str_is_alpha(test2);
// 	int result3 = ft_str_is_alpha(test3);
// 	int result4 = ft_str_is_alpha(test4);
// 	int result5 = ft_str_is_alpha(test5);

// 	printf("Test 1: %s / Result: %s\n", test1, result1 ? "Yes(1)" : "No(0)");
// 	printf("Test 2: %s / Result: %s\n", test2, result2 ? "Yes(1)" : "No(0)");
// 	printf("Test 3: %s / Result: %s\n", test3, result3 ? "Yes(1)" : "No(0)");
// 	printf("Test 4: %s / Result: %s\n", test4, result4 ? "Yes(1)" : "No(0)");
// 	printf("Test 5: %s / Result: %s\n", test5, result5 ? "Yes(1)" : "No(0)");

// 	return 0;
// }
