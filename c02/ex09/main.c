#include	"ft_strcapitalize.c"
#include	<stdio.h>
#include	<unistd.h>

char	*ft_strcapitalize(char *str);

int		main()
{
	char	str[]= "g{dsfd}";
	//char 	bc[]="Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";


printf("önce: %s\n",str);
	printf("sonr: %s",ft_strcapitalize(str));
	//printf("\ngrkn: %s\n",bc);

	return 0;
}
