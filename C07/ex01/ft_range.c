/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:30:15 by mvolkman          #+#    #+#             */
/*   Updated: 2023/09/03 13:43:24 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*memory;
	int	range;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	memory = (int *)malloc(sizeof(int) * (range + 1));
	while (min < max)
	{
		memory[i] = min;
		i++;
		min++;
	}
	return (memory);
}

// #include <stdio.h>

// int main(void)
// {
// 	int min = 150;
// 	int max = 200;
// 	int i = 0;
// 	int *answer = ft_range(min, max);
// 	if(answer){
// 		while(answer[i] != '\0')
// 		{
// 			printf("RANGE: %d\n", answer[i]);
// 			i++;
// 		}
// 		free(answer);
// 	}
// 	else{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
