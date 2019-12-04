/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 04:00:45 by jduarte-          #+#    #+#             */
/*   Updated: 2019/12/04 04:46:57 by jduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
	char a[] = "®";
	printf("%i", ft_str_is_printable(a));
}
