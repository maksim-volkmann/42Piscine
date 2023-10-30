/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:44:51 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/26 16:59:43 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include <stdio.h>

// int	main(void) {
// 	char source[] = "Hello";
// 	char destination[] = "0123456789 9876543210";
// 	ft_strncpy(destination, source, 6);
// 	printf("Source: %s\n", source);
// 	printf("Copied: %s\n", destination);
// 	return 0;
// }
