/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:49:38 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/26 16:33:54 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int main(void) {
// 	char	test1[] = "Hello, World!";
// 	char	test2[] = "This is a Test";
// 	char	test3[] = "12345";
// 	char	test4[] = "lowerUPPER";
// 	char	test5[] = "";

// 	printf("Test 1: Before: %s / ", test1);
// 	printf("After: %s\n", ft_strlowcase(test1));

// 	printf("Test 2: Before: %s / ", test2);
// 	printf("After: %s\n", ft_strlowcase(test2));

// 	printf("Test 3: Before: %s / ", test3);
// 	printf("After: %s\n", ft_strlowcase(test3));

// 	printf("Test 4: Before: %s / ", test4);
// 	printf("After: %s\n", ft_strlowcase(test4));

// 	printf("Test 5: Before: %s / ", test5);
// 	printf("After: %s\n", ft_strlowcase(test5));

// 	return 0;
// }
