#include "ft_strcat.c"
#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	
	

	char dest[] = "ali";
    char src[] = "a";


	printf("\nOld Dest: %s", dest);
	printf("\nSource: %s", src);
	ft_strcat(dest, src);
	printf("\nNew Dest: %s", dest);

	return (0);
}
