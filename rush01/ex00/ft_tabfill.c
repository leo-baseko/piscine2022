/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:23:50 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 18:58:31 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

// Diminutif de String Malloc. Alloue de l'espace memoire a une chaine de caracteres.

char	*ft_strmal(int i)
{
	char	*str;

	str = malloc(sizeof(char) * i);
	if (!(str))
		return (NULL);
	return (str);
}

// Diminutif de Tableau Malloc. Alloue de l'espace a un tableau de string. Fait appel a
// ft_strmal (fonction du dessus) pour allouer string par string.

char	*ft_tabmal(int x, int y)
{
	char	**tab;
	int		i;

	tab = malloc(sizeof(char) * x);
	if (!(str))
		return (NULL);
	i = -1;
	while (++i < x)
	{
		tab[i] = ft_strmal(y);
		if (!(tab[i]))
			return (NULL);
	}
	return (tab);
}

// Parcours le tableau vide pour mettre 0 a tous les indices pour s'assurer de so contenu

void	ft_tabfill(char **tab)
{
	int	x;
	int	y;

	x = -1;
	while (++x < g_size)
	{
		y = -1;
		while (++y < g_size)
			tab[x][y] = 0;
	}
}

// Prend la string des hints en argument pour les stocker en tableau, plus simple a utiliser.
// Il faut evidemment aussi Malloc ce tableau avant de l'utiliser

char	**ft_strtotab(char *str, int i)
{
	int		x;
	int		y;
	char	**hint;

	hint = ft_tabmal(g_size - '0', g_size - '0');
	if (!(hints))
		return (NULL);
	x = -1;
	while (str[i] && ++x < g_size)
	{
		y = -1;
		while (str[i] && ++y < g_size)
		{
			if (str[i] == ' ')
				i++;
			hint[x][y] = str[i];
			i++;
		}
		hint[x][y] = '\0';
	}
	hint[x] = NULL;
	return (hint);
}
