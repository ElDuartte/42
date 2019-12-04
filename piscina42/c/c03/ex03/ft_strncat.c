/*char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	counter;

	i = 0;
	while (dest[i] != '\0')
		i++;

	counter = 0;
	while (src[counter] != '\0' && counter <= nb)
	{
		dest[i] = src[counter];
		i++;
		counter++;
	}
	dest[i] = '\0';
	return (dest);
}*/
char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (i < nb && src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}

#include <unistd.h>
#include <stdio.h>

int main(void) 
{
    
    char dest[] = "abc";
    char src[] = "def";
	char nb['2'];
	
	ft_strncat(dest, src, nb);
    printf("%s\n", dest);
    return 0;
}