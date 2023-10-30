/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:07:09 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/26 16:27:17 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 64 && str[i] < 91))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int main(void) {
// 	char test1[] = "hello";
// 	char test2[] = "Hello";
// 	char test3[] = "world123";
// 	char test4[] = "";
// 	char test5[] = "lowercase";

// 	int result1 = ft_str_is_uppercase(test1);
// 	int result2 = ft_str_is_uppercase(test2);
// 	int result3 = ft_str_is_uppercase(test3);
// 	int result4 = ft_str_is_uppercase(test4);
// 	int result5 = ft_str_is_uppercase(test5);

// 	printf("Test 1: %s\nResult: %s\n", test1, result1 ? "UP(1)" : "NO(0)");
// 	printf("Test 3: %s\nResult: %s\n", test3, result3 ? "UP(1)" : "NO(0)");
// 	printf("Test 4: %s\nResult: %s\n", test4, result4 ? "UP(1)" : "NO(0)");
// 	printf("Test 5: %s\nResult: %s\n", test5, result5 ? "UP(1)" : "NO(0)");

// 	return 0;
// }
