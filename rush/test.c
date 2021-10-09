/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:12:25 by youskim           #+#    #+#             */
/*   Updated: 2021/10/09 23:32:12 by rayd             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{	
	for (int k = 1; k <= y ; k++)
	{
		if (k == 1)
		{
			for (int i=1; i <= x ; i++)
			{
				if (i == 1 || i == x)
					ft_putchar('A');
				else
					ft_putchar('B');
			}
		ft_putchar('\n');
		}
		else if (k > 1 && k < y)
		{
			for (int i = 1; i <= x; i++)
			{
				if (i == 1 || i == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
		ft_putchar('\n');
		}
		else
		{
			for (int i = 1; i <= x; i++)
			{
				if( i == 1 || i == x)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
		}
	}
	ft_putchar('\n');
}

int	main(void)
{
	rush(7,6);
	return 0;
}
