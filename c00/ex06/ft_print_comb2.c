/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:08:30 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/11 18:57:01 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	unit(int a)
{
	int	b;

	b = a % 10;
	return (b);
}

int	decade(int a)
{
	int	b;

	b = a / 10;
	return (b);
}

void	show_numb(int a, int b)
{
	int	au;
	int	bu;
	int	ad;
	int	bd;

	au = unit(a) + 48;
	bu = unit(b) + 48;
	ad = decade(a) + 48;
	bd = decade(b) + 48;
	write(1, &ad, 1);
	write(1, &au, 1);
	write(1, " ", 1);
	write(1, &bd, 1);
	write(1, &bu, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			show_numb(i, j);
			if (i != 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
