/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:34:52 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/19 15:35:02 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char value);

void	first(int width)
{
	ft_putchar('A');
	while (width > 2)
	{
		ft_putchar('B');
		width--;
	}
	if (width > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	middle(int width)
{
	ft_putchar('B');
	while (width > 2)
	{
		ft_putchar(' ');
		width--;
	}
	if (width > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	last(int width)
{
	ft_putchar('C');
	while (width > 2)
	{
		ft_putchar('B');
		width--;
	}
	if (width > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	if (width > 0 && height > 0)
	{
		first(width);
		while (height > 2)
		{
			middle(width);
			height--;
		}
		if (height > 1)
		{
			last(width);
		}
	}
}
