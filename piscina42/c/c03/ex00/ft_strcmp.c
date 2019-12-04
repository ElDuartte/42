int	ft_strcmp(char *s1, char *s2)
{
	int counter;
	int i;

	i = 0;
	counter = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')	
        i++;

	if (s1[i] != s2[i])
	{
	    counter = s1[i] - s2[i];
	    return (counter);
    }
	else 
	    return (0);
}

#include <unistd.h>
#include <stdio.h>

int     main()
{
 char str[] = "hol";
 char to_find[] = "hola";
 
 printf("%d", ft_strcmp(str, to_find));
 
 return(0);
}
