/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 12:13:10 by rwang             #+#    #+#             */
/*   Updated: 2017/07/01 12:14:11 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_line(char front, char mid, char end, int x);

void	rush(int x, int y)
{
	int row;

	row = 0;
	if (x > 0 && y > 0)
	{
		print_line('/', '*', '\\', x);
		ft_putchar('\n');
		while (row < y - 2)
		{
			print_line('*', ' ', '*', x);
			ft_putchar('\n');
			row++;
		}
		if (y > 1)
		{
			print_line('\\', '*', '/', x);
			ft_putchar('\n');
		}
	}
}

void	print_line(char front, char mid, char end, int x)
{
	int col;

	if (x > 0)
		ft_putchar(front);
	col = 0;
	while (col < x - 2)
	{
		ft_putchar(mid);
		col++;
	}
	if (x > 1)
		ft_putchar(end);
}
