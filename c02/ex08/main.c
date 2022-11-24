#include	"ft_strlowcase.c"
#include	<stdio.h>
#include	<unistd.h>

char	*ft_strlowcase(char *str);

int		main()
{
	char	str[]= "DSFDSD.";

	//ft_strupcase(str);
	
	int a=0;
	while (str[a] != 0)
	{
		write(1, &str[a], 1);
		a++;
	}

	printf("\n\n%s",ft_strlowcase(str));

	return 0;
}
