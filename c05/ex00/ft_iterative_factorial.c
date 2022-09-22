int	ft_iterative_factorial(int nb)
{
	int i;
	int max;

	i = 2;
	max = nb;
	while (i < max)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(1));
}
*/
