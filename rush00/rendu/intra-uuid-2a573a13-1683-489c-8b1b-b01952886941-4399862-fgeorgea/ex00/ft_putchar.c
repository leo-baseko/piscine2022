/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:17:22 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/09/10 12:38:28 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char left, char center, char right, int x)
{
	write(1, &left, 1);
	if (x >= 2)
	{
		while ((x - 2) > 0)
		{
			write(1, &center, 1);
			x--;
		}	
		write(1, &right, 1);
	}
	write(1, "\n", 1);
}
