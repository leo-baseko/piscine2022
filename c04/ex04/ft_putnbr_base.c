/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 22:40:52 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/29 13:38:08 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

int	ft_errorc(int size, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (size <= 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_nbr(int nbr, int size, char *base)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr < size)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr_base(nbr / size, base);
		ft_putnbr_base(nbr % size, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;

	length = ft_strlen(base);
	if (ft_errorc(length, base) == 0)
		return ;
	ft_nbr(nbr, length, base);
}
/*
#include <stdio.h>
int main(void)
{
	char *test = "0123456789ABCDEF";
	ft_putnbr_base(0, test);
	printf("\n");
}*/
