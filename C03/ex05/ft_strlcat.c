/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:32:00 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/28 10:25:40 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_find_index(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = ft_find_index(dest);
	x = 0;
	if (size == 0)
	{
		return (ft_find_index(src));
	}
	if (size < i)
	{
		dest[size] = '\0';
		return (i);
	}
	while ((i + x) < (size - 1) && src[x] != '\0')
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (i + x + ft_find_index(src));
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char dest[7] = "abcde";
// 	char *src = "123456";

// 	// Using strlcat
// 	strlcat(dest, src, sizeof(dest));
// 	printf("Original: %s\n", dest);
// 	unsigned int result_length = strlcat(dest, src, sizeof(dest));
// 	printf("Original: %u\n", result_length);
// 	printf("\n");
// 	// Using ft_strlcat
// 	ft_strlcat(dest, src, sizeof(dest));
// 	printf("Created : %s\n", dest);
// 	unsigned int result_length2 = ft_strlcat(dest, src, sizeof(dest));
// 	printf("Created : %u\n", result_length2);

// 	return 0;
// }
