/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:27:03 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/20 15:21:07 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	possitive;
	char	negative;

	possitive = 80;
	negative = 78;
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &possitive, 1);
	}
}
