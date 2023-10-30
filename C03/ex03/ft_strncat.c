/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:59:48 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/27 13:09:11 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0' && x < nb)
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	src1[] = "World";
// 	char	dest1[20] = "Hello";

// 	char	src2[] = "World";
// 	char	dest2[20] = "Hello";
// 	int	nb = 10;

// 	ft_strncat(dest1, src1, nb);
// 	printf("CREATED SCR : %s\n", src1);
// 	printf("CREATED DEST: %s\n", dest1);
// 	printf("\n");
// 	strncat(dest2, src2, nb);
// 	printf("ORIGINAL SCR : %s\n", src1);
// 	printf("ORIGINAL DEST: %s\n", dest1);
// }
