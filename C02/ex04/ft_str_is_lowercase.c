/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:47:19 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/26 16:34:01 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 96 && str[i] < 123))
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

// 	int result1 = ft_str_is_lowercase(test1);
// 	int result2 = ft_str_is_lowercase(test2);
// 	int result3 = ft_str_is_lowercase(test3);
// 	int result4 = ft_str_is_lowercase(test4);
// 	int result5 = ft_str_is_lowercase(test5);

// 	printf("Test 1: %s\nResult: %s\n", test1, result1 ? "OK" : "NO");
// 	printf("Test 3: %s\nResult: %s\n", test3, result3 ? "OK" : "NO");
// 	printf("Test 4: %s\nResult: %s\n", test4, result4 ? "OK" : "NO");
// 	printf("Test 5: %s\nResult: %s\n", test5, result5 ? "OK" : "NO");

// 	return 0;
// }
