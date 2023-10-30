/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:17:24 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/26 20:46:41 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char s1[] = "a";
// 	char s2[] = "b";

// 	// Testing ft_strcmp
// 	int result_ft = ft_strcmp(s1, s2);
// 	printf("ft_strcmp result: %d\n", result_ft);

// 	// Testing strcmp
// 	int result_strcmp = strcmp(s1, s2);
// 	printf("strcmp result: %d\n", result_strcmp);

// 	return 0;
// }
