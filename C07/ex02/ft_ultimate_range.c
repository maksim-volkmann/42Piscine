/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:57:55 by mvolkman          #+#    #+#             */
/*   Updated: 2023/09/04 17:40:34 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	int min = 0;
// 	int max = 10;
// 	int *range = 0;
// 	int func = ft_ultimate_range(&range, min, max);
// 	if (func >= 0) {
// 		printf("RANGE: %d\n", func);
// 		// Free the allocated memory.
// 		free(range);
// 	} else {
// 		printf("Memory allocation failed.\n");
// 	}
// 	return 0;
// }
