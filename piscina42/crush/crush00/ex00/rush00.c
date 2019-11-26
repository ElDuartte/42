/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 00:43:54 by jduarte-          #+#    #+#             */
/*   Updated: 2019/11/17 13:02:04 by jduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);
void		write_row(char first, char mid, char last, int x);

void		rush(int x, int y)
{
	     int actual_row;
		
		 actual_row = 0;
	if (x < 0 || y < 0)
	{
		write( 1,"Por favor, introduzca numeros mayores o iguales a 0\n", 60);
		actual_row = y; 
	}
	while (actual_row <= y-1)
	{
		if (actual_row == 0)
		{
			write_row('o', '-', 'o', x);
		}
		else if (actual_row == y-1)
		{
			write_row('o', '-', 'o', x);
		}
		else
		{
			write_row('|', ' ', '|', x);
		}
		actual_row++;
	}
}

void		write_row(char first, char mid, char last, int x)
{
	int i;

	i = 0;
	while(i<=x-1)
	{
	if (i==0)
		ft_putchar(first);
	else if (i==x-1)
		ft_putchar(last);
	else
	{	
		ft_putchar(mid);
	}
	i++;
	}
	ft_putchar('\n');
}
