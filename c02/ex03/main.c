#include	"ft_str_is_numeric.c"
#include	<stdio.h>
#include	<unistd.h>

int		ft_str_is_numeric(char *str);

int		main()
{
	char	str[] = "231321fds.";

	//ft_str_is_alpha(str);
	
	int a=0;
	while (str[a] != 0)
	{
		//write(1, &str[a], 1);
		a++;
	}

	printf("\n\n%d",ft_str_is_numeric(str));

	return 0;
}
