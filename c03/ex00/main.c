#include	"ft_strcmp.c"
#include	<stdio.h>
#include	<unistd.h>

int	ft_strcmp(char *s1, char *s2);

int		main()
{
	char	string1[] = "ali";
	char	string2[] = "ali";

	printf("\n\n%d",ft_strcmp(string1, string2));

	return 0;
}
