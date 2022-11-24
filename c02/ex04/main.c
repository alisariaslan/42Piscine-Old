#include	"ft_str_is_lowercase.c"
#include	<stdio.h>
#include	<unistd.h>

int		ft_str_is_lowercase(char *str);

int		main()
{
	char	str[] = "asdfsbBd";

	//ft_str_is_alpha(str);
	
	int a=0;
	while (str[a] != 0)
	{
		//write(1, &str[a], 1);
		a++;
	}

	printf("\n\n%d",ft_str_is_lowercase(str));

	return 0;
}
