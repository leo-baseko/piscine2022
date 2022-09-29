/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:59:16 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/29 15:20:02 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	unb;

	unb = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		unb = -nb;
	}
	if (unb < 10)
	{
		ft_putchar(unb + '0');
	}
	if (unb >= 10)
	{
		ft_putnbr(unb / 10);
		ft_putnbr(unb % 10);
	}
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int			i;
	t_stock_str	*stock;

	stock = par;
	i = 0;
	while (stock[i].str != 0)
	{
		ft_putstr(stock[i].str);
		write(1, "\n", 1);
		ft_putnbr(stock[i].size);
		write(1, "\n", 1);
		ft_putstr(stock[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
struct	s_stock_str *ft_strs_to_tab(int ac, char **av);

#include <stdio.h>
int main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return 0;
}*/
