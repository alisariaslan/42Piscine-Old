#include	"ft_str_is_printable.c"
#include	<stdio.h>
#include	<unistd.h>

int		ft_str_is_printable(char *str);

int		main()
{
	char	str[3];

	str[0]='a';
	str[1]='b';
	str[2]='\n';
	//ft_str_is_alpha(str);
	
	int a=0;
	while (str[a] != 0)
	{
		write(1, &str[a], 1);
		a++;
	}

	printf("\n\n%d",ft_str_is_printable(str));

	return 0;
}
