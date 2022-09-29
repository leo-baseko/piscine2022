#include <unistd.h>

void	show_nbr(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	int	nbd;
	int	nbm;

	nbd = nb / 10;
	nbm = nb % 10;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		show_nbr('-');
		nb = nb * (-1);
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nbd);
		show_nbr(nbm + '0');
	}
	else
	{
		show_nbr(nb + '0');
	}
}

char	fizzbuzzgolri(int a)
{
	if ((a + 1) % 3 == 0 && (a + 1) % 5 == 0)
		return (write(1, "fizzbuzz", 8));
	if ((a + 1) % 3 == 0)
		return (write(1, "fizz", 4));
	if ((a + 1) % 5 == 0)
		return (write(1, "buzz", 4));
	ft_putnbr(a + 1);
	return ('\0');
}

int main (void)
{
	int i = 0;

	while (i < 100)
	{
		fizzbuzzgolri(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
