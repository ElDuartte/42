/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 05:49:09 by jduarte-          #+#    #+#             */
/*   Updated: 2019/12/04 06:49:39 by jduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ') &&
				(str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] -= 32;
		}
		else if (!(i == 0 || str[i - 1] == ' ') &&
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int   main()
{
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

  printf("%s", ft_strcapitalize(str));
}
