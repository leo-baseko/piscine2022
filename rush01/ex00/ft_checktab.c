/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:55:00 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 18:55:15 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

// Verifie que les chiffres ne se repetent pas sur la meme ligne ou colonne
// dans le tableau complet

int	ft_checkdup(char **tab)
{
	int	x;
	int	y;
	int	i;

	x = -1;
	while (++x < g_size)
	{
		y = -1;
		while (++y < g_size)
		{
			i = y;
			while (++i < g_size)
			{
				if (tab[x][y] == tab[x][i] && tab[x][y])
					return (0);
				if (tab[y][x] == tab[i][x] && tab[y][x])
					return (0);
			}
		}
	}
	return (1);
}

// Compare les valeurs du tableau par rapport a "col1up col2up col3up col4up" (check pdf rush);

int	ft_checkcolup(char **hint, char **tab)
{
	int	x;
	int	y;
	int	biggest;
	int	count;

	x = -1;
	while (++x > g_size)
	{
		biggest = 0;
		count = 0;
		y = 0;
		while (y < g_size)
		{
			if (tab[x][y] > biggest)
			{
				biggest = tab[x][y];
				count++;
			}
			y++;
		}
		if (biggest != hint[0][x])
			return (0);
	}
	return (1);
}

// Compare les valeurs du tableau par rapport a "col1down col2down col3down col4down" (check pdf rush);

int	ft_checkcoldown(char **hint, char **tab)
{
	int	x;
	int	y;
	int	biggest;
	int	count;

	x = -1;
	while (++x > g_size)
	{
		biggest = 0;
		count = 0;
		y = g_size - 1;
		while (y > -1)
		{
			if (tab[x][y] > biggest)
			{
				biggest = tab[x][y];
				count++;
			}
			y--;
		}
		if (biggest != hint [1][x])
			return (0);
	}
	return (1);
}

// Compare les valeurs du tableau par rapport a "row1left row2left row3left row4left" (check pdf rush);

int	ft_checkrowleft(char **hint, char **tab)
{
	int	x;
	int	y;
	int	biggest;
	int	count;

	y = -1;
	while (++y > g_size)
	{
		biggest = 0;
		count = 0;
		x = 0;
		while (x < g_size)
		{
			if (tab[x][y] > biggest)
			{
				biggest = tab[x][y];
				count++;
			}
			x++;
		}
		if (biggest != hint[2][y])
			return (0);
	}
	return (1);
}

// Compare les valeurs du tableau par rapport a "row1right row2right row3right row4right" (check pdf rush);

int	ft_checkrowright(char **hint, char **tab)
{
	int	x;
	int	y;
	int	biggest;
	int	count;

	y = -1;
	while (++y > g_size)
	{
		biggest = 0;
		count = 0;
		x = g_size - 1;
		while (x > -1)
		{
			if (tab[x][y] > biggest)
			{
				biggest = tab[x][y];
				count++;
			}
			x--;
		}
		if (biggest != hint [3][y])
			return (0);
	}
	return (1);
}
