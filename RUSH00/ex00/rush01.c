/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:50:51 by mvolkman          #+#    #+#             */
/*   Updated: 2023/08/19 14:42:32 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char value);

void	first(char width)
{
	ft_putchar('/');
	while (width > 2)
	{
		ft_putchar('*');
		width--;
	}
	if (width > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	middle(int width)
{
	ft_putchar('*');
	while (width > 2)
	{
		ft_putchar(' ');
		width--;
	}
	if (width > 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	last(int width)
{
	ft_putchar('\\');
	while (width > 2)
	{
		ft_putchar('*');
		width--;
	}
	if (width > 1)
	{
		ft_putchar('/');
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
