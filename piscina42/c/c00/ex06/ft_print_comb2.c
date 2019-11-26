/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 11:47:18 by jduarte-          #+#    #+#             */
/*   Updated: 2019/11/26 17:40:19 by jduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = -1;
	while(first <98)
	{
		first++;
		second = first;
		while(second < 99)
		{
			second++;
			ft_putchar('0' + (first / 10));
			ft_putchar('0' + (first % 10));
			ft_putchar(' ');
			ft_putchar('0' + (second / 10));
			ft_putchar('0' + (second % 10));

			if(first != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
int main()
{
	ft_print_comb2();
	return(0);
}
