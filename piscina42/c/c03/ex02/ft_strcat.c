char *ft_strcat(char *dest, char *src)
{
	int i;
	int counter;

	i = 0;
	while (dest[i] != '\0')
		i++;
	counter = 0;
	while (src[counter] != '\0')
	{
		dest[i + counter] = src[counter];
		counter++;
	}
	dest[i + counter] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main () {
   char str1[50], str2[50];

   //destination string
   strcpy(str1, "This is my initial string");
 
   //source string
   strcpy(str2, ", add this");

   //displaying destination string
   printf("String after concatenation: %s", strcat(str1, str2));

   return(0);
}