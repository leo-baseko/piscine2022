#include <unistd.h>
char	*ft_rev_print(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	while (i >= 0)
	{
		write(1 , &str[i], 1);
		i--;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	char *test = "salut les amis ! chouette ! etib";
	ft_rev_print(test);
	return 0;
}
