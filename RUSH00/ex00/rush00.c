/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:27:47 by jlohmull          #+#    #+#             */
/*   Updated: 2023/08/19 14:42:38 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char value);

void	first_and_last(int width)
{
	ft_putchar('o');
	while (width > 2)
	{
		ft_putchar('-');
		width--;
	}
	if (width > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	middle(int width)
{
	ft_putchar('|');
	while (width > 2)
	{
		ft_putchar(' ');
		width--;
	}
	if (width > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	if (width > 0 && height > 0)
	{
		first_and_last(width);
		while (height > 2)
		{
			middle(width);
			height--;
		}
		if (height > 1)
		{
			first_and_last(width);
		}
	}
}
