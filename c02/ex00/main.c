#include	"ft_strcpy.c"
#include	<stdio.h>
#include	<unistd.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char	source[] = "AAA";
	char	destination[] = "AAAFDSFDS";

	ft_strcpy(destination, source);
	
	int a=0;
	while (destination[a] != 0)
	{
		write(1, &destination[a], 1);
		a++;
	}

	return 0;
}
