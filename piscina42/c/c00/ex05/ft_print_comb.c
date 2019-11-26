/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 06:19:06 by jduarte-          #+#    #+#             */
/*   Updated: 2019/11/26 12:17:18 by jduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print(int c, int d, int u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
	if(c != '7' || d != '8' || u != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0' - 1;
	while(first++ <= '9')
	{
		second = first;
		while(second++ <= '9')
		{
			third = second + 1;
			while(third <= '9')
			{
				ft_print(first, second, third);
				third++;
			}
		}
	}
}
