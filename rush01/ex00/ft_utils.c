/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:49:20 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 19:30:11 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

// Ecris "Error" avec retour a la ligne et renvoie zero.

int	ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

// Ouais bon vous voyez ca normalement vous etes trop bg

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

// Ecrit le contenu de tout le tableau caractere par caracteres, separes par des espaces
// et des retours a la ligne apres chaque serie de 4

void	ft_printtab(char **tab)
{
	int	x;
	int	y;

	x = -1;
	while (++x < g_size)
	{
		y = -1;
		while (++y < g_size)
		{
			write(1, &tab[x][y], 1);
			if (y != 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
