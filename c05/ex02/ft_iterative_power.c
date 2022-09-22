int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	val;

	i = 1;
	val = nb;
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		nb *= val;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("tema la puissance de %d", ft_iterative_power(0, 2));
	return (0);
}
*/
