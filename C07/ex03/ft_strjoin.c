/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:42:01 by mvolkman          #+#    #+#             */
/*   Updated: 2023/09/04 17:45:19 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	update_variables(int *x, int *sep_l, int *i, int *y)
{
	*x = 0;
	*sep_l = 0;
	(*i)++;
	(*y)++;
}

int	s(int size, char **strs)
{
	int	len;
	int	i;
	int	x;

	len = 0;
	i = 0;
	x = 0;
	while (i < size)
	{
		while (strs[i][x] != '\0')
		{
			x++;
			len++;
		}
		i++;
		x = 0;
	}
	return (len);
}

int	l(char *sep)
{
	int	sep_l;

	sep_l = 0;
	while (sep[sep_l] != '\0')
	{
		sep_l++;
	}
	return (sep_l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*memory;
	int		i;
	int		t;
	int		sep_l;
	int		arr[2];

	i = 0;
	arr[0] = 0;
	arr[1] = 0;
	t = 0;
	memory = malloc(sizeof(char) * (s(size, strs) + ((size - 1) * l(sep)) + 1));
	sep_l = 0;
	while (arr[1] < size)
	{
		while (strs[i][arr[0]] != '\0')
			memory[t++] = strs[i][arr[0]++];
		if (arr[1] < (size - 1))
		{
			while (sep[sep_l] != '\0')
				memory[t++] = sep[sep_l++];
		}
		update_variables(arr + 0, &sep_l, &i, arr + 1);
	}
	memory[t] = '\0';
	return (memory);
}

// #include <stdio.h>

// int main(void)
// {
// 	// Test cases
// 	char *strings1[] = {"Hello", "world", "Hell"};
// 	char *strings2[] = {"This", "is", "a", "test", NULL};
// 	char *strings3[] = {NULL};

// 	char *result1 = ft_strjoin(3, strings1, "-,");
// 	char *result2 = ft_strjoin(4, strings2, "-");
// 	char *result3 = ft_strjoin(0, strings3, ","); // Test with size 0

// 	printf("Result 1: %s\n", result1);
// 	printf("Result 2: %s\n", result2);
// 	printf("Result 3: %s\n", result3);

// 	// Free the allocated memory
// 	free(result1);
// 	free(result2);
// 	free(result3);

// 	return 0;
// }
