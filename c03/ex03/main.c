#include "ft_strncat.c"
#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	
	

	char dest[] = "mesih";
    char src[] = "mezar";


	printf("\nOld Dest: %s", dest);
	printf("\nSource: %s", src);
	ft_strncat(dest, src, 20);
	printf("\nNew Dest: %s", dest);

	return (0);
}
