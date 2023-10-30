/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:26:35 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/26 16:34:53 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>

// int	main(void) {
// 	char source[] = "Hello, world!";
// 	char destination[] = "0123456789 9876543210";
// 	ft_strcpy(destination, source);

// 	// Print the copied string
// 	printf("Source: %s\n", source);
// 	printf("Copied: %s\n", destination);
// 	return 0;
// }
