#include	"ft_strncmp.c"
#include	<stdio.h>
#include	<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int nb);

int		main()
{
	char a[] = "a";;
	char b[] = "a";
	int n;

   

	printf("\n\n%d",ft_strncmp(a,b,1));

	return 0;
}
