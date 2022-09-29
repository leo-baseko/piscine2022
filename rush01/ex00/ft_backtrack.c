/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:39:26 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 20:14:36 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_backtrack(char **tab, int x, int y);
{
	int	i;

	i = 0;
	while (++i <= g_size)
	{
		tab[x][y] = i;
		if (x < g_size)
		{
			if (y < g_size)
				return (ft_backtrack(tab, x, y + 1));
			return (ft_backtrack(tab, x + 1, y));
		}
	}
	tab[x][y] = 0;
	return (0);
}
