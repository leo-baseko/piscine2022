#include <unistd.h>

int ft_strlen(char *a)
{
	int i = 0;

	while (a[i])
		i++;
	return (i);
}

char ft_isalpha(char a)
{
	if (a >= 'a' && a <= 'z')
		a -= 32;
	else if (a >= 'A' && a <= 'Z')
		a += 32;
	return a;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	int i = 0;
	char salut;
	int size = ft_strlen(argv[1]);
	while (i < size)
	{
		salut = ft_isalpha(argv[1][i]);
		write(1, &salut, 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
