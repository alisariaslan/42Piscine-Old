#include	"ft_strupcase.c"
#include	<stdio.h>
#include	<unistd.h>

char	*ft_strupcase(char *str);

int		main()
{
	char	str[]= "aunluckyz.";

	//ft_strupcase(str);
	
	int a=0;
	while (str[a] != 0)
	{
		write(1, &str[a], 1);
		a++;
	}

	printf("\n\n%s",ft_strupcase(str));

	return 0;
}
