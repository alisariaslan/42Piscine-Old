#include	"ft_str_is_uppercase.c"
#include	<stdio.h>
#include	<unistd.h>

int		ft_str_is_uppercase(char *str);

int		main()
{
	char	str[] = "SDFDS";

	//ft_str_is_alpha(str);
	
	int a=0;
	while (str[a] != 0)
	{
		//write(1, &str[a], 1);
		a++;
	}

	printf("%d",ft_str_is_uppercase(str));

	return 0;
}
