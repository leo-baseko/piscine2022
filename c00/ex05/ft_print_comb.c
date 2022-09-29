/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:01:32 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/11 20:44:58 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(int a, int b, int c)
{
	int	aa;
	int	bb;
	int	cc;

	aa = a + 48;
	bb = b + 48;
	cc = c + 48;
	write(1, &aa, 1);
	write(1, &bb, 1);
	write(1, &cc, 1);
	if (a != 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	d;
	int	e;
	int	f;

	d = 0;
	e = 1;
	f = 2;
	while (d <= 7)
	{
		e = d + 1;
		while (e <= 8)
		{
			f = e + 1;
			while (f <= 9)
			{
				ft_print_numbers(d, e, f);
				f++;
			}
			e++;
		}
		d++;
	}
}
