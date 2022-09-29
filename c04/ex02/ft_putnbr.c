/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:54:01 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/20 16:29:21 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
