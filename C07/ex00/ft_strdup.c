/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:23:36 by mvolkman          #+#    #+#             */
/*   Updated: 2023/09/03 18:51:37 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*memory;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	memory = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		memory[i] = src[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}

// #include <stdio.h>

// int main(void)
// {
// 	char s1[] = "HELLLOOOOOO";
// 	char *copy = ft_strdup(s1);
// 	if (copy)
// 	{
// 		printf("COPY: %s\n", copy);
// 		free(copy);
// 	} else {
// 		printf("Memory allocation failed.\n");
// 	}
// 	return 0;
// }
