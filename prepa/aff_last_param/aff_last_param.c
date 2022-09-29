#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	char	*str;

	str = argv[argc - 1];
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
