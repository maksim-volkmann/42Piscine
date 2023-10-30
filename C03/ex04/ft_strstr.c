/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:09:37 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/28 10:46:51 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_find_index(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;
	int	y;

	x = 0;
	y = 0;
	i = ft_find_index(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		if (to_find[y] == str[x] && y < i)
		{
			y++;
			if (to_find[y] == '\0')
				return (&str[x - y + 1]);
		}
		else
		{
			y = 0;
		}
		x++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char haystack[] = "Hello, this is a test string.";
// 	char needle[] = "tes";

// 	// Using ft_strstr
// 	char *ft_result = ft_strstr(haystack, needle);

// 	// Using original strstr
// 	char *orig_result = strstr(haystack, needle);

// 	printf("CREATED  result: %s\n", ft_result);
// 	printf("ORIGINAL result: %s\n", orig_result);

// 	return 0;
// }
