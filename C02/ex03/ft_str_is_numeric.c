/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:43:58 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/26 16:34:04 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void) {
// 	char test1[] = "12345";
// 	char test2[] = "42abc";
// 	char test3[] = "";
// 	char test4[] = "9876543210";
// 	char test5[] = "0";

// 	int result1 = ft_str_is_numeric(test1);
// 	int result2 = ft_str_is_numeric(test2);
// 	int result3 = ft_str_is_numeric(test3);
// 	int result4 = ft_str_is_numeric(test4);
// 	int result5 = ft_str_is_numeric(test5);

// 	printf("1: %s\nR: %s\n", test1, result1 ? "Num/Empty" : "Not Num");
// 	printf("2: %s\nR: %s\n", test2, result2 ? "Num/Empty" : "Not Num");
// 	printf("3: %s\nR: %s\n", test3, result3 ? "Num/Empty" : "Not Num");
// 	printf("4: %s\nR: %s\n", test4, result4 ? "Num/Empty" : "Not Num");
// 	printf("5: %s\nR: %s\n", test5, result5 ? "Num/Empty" : "Not Num");

// 	return 0;
// }
