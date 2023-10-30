/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:27:05 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/26 16:27:12 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int main(void) {
// 	char test1[] = "Hello, world!";
// 	char test2[] = "Testing\nnewline";
// 	char test3[] = "ASCII 126 ~";
// 	char test4[] = "";
// 	char test5[] = "Non-printable\x01";

// 	int result1 = ft_str_is_printable(test1);
// 	int result2 = ft_str_is_printable(test2);
// 	int result3 = ft_str_is_printable(test3);
// 	int result4 = ft_str_is_printable(test4);
// 	int result5 = ft_str_is_printable(test5);

// 	printf("Test 1: %s\nResult: %s\n", test1, result1 ? "Yes(1)" : "No(0)");
// 	printf("Test 2: %s\nResult: %s\n", test2, result2 ? "Yes(1)" : "No(0)");
// 	printf("Test 3: %s\nResult: %s\n", test3, result3 ? "Yes(1)" : "No(0)");
// 	printf("Test 4: %s\nResult: %s\n", test4, result4 ? "Yes(1)" : "No(0)");
// 	printf("Test 5: %s\nResult: %s\n", test5, result5 ? "Yes(1)" : "No(0)");

// 	return 0;
// }
