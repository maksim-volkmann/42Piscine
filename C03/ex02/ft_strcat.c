/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:29:42 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/28 10:28:13 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0')
	{
		dest[x + i] = src[x];
		x++;
	}
	dest[x + i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int main() {
// 	char src[] = "world!";
// 	char dest[14] = "Hello, ";

// 	printf("src = %s\n", src);
// 	printf("Before con: dest = %s\n", dest);

// 	ft_strcat(dest, src);
// 	printf("After  con: dest = %s\n", dest);

// 	strcat(dest, src);
// 	printf("Original con: dest = %s\n", dest);

// 	return 0;
// }
