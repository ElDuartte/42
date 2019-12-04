int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
        
	return (s1[i] - s2[i]);
}

#include <string.h>
#include <stdio.h>

int main()
{
    int result;

    // comparing strings str1 and str2
    result = ft_strncmp("asdf", "asdf", 4);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = ft_strncmp("asde", "asdf", 4);
    printf("strcmp(str1, str3) = %d\n", result);
    
    result = ft_strncmp("asdg", "asdf", 4);
    printf("strcmp(str1, str3) = %d\n", result);
    
    result = ft_strncmp("asdf", "asdf", 3);
    printf("strcmp(str1, str3) = %d\n", result);

    result = ft_strncmp("asde", "asdf", 3);
    printf("strcmp(str1, str3) = %d\n", result);
    
    return 0;
}