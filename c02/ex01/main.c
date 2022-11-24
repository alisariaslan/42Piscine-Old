#include	"ft_strncpy.c"
#include	<stdio.h>
#include	<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char	source[] = "AA";
	char	destination[] = "BBBB";

	ft_strncpy(destination, source,2);
	
	int a=0;
	while (destination[a] != 0)
	{
		write(1, &destination[a], 1);
		a++;
	}

	return 0;
}
