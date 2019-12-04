/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlpcy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 06:50:33 by jduarte-          #+#    #+#             */
/*   Updated: 2019/12/04 07:42:00 by jduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int counter;

	counter = 0;
	while (src[counter] != '\0')
		counter++;
	i = 0;
	while (src[i] != '\0' && i < (size -1))
	{
		dest[i] =  src[i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}
