int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 2)
		return (1);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_fibonacci(9));
}
*/
