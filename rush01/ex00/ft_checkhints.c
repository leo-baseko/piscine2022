/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkhints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:19:51 by dagutin           #+#    #+#             */
/*   Updated: 2022/09/18 18:49:03 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

// Verifie si les nombre d'arguments est correcte
// Verifie aussi la taille de la string avec les hints

int	ft_check(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (ft_error());
	if (ft_strlen(av[1]) != (g_size * 8) - 1)
		return (ft_error());
}

// Verifie qu'il y ait bien un espace entre chaque hint et qu'il en ait bien 16
// (ou + en fonction de la taille du tableau)

int	ft_checkformat(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= '1' && str[i] <= g_size && str[i + 1] == ' '
				|| !(str [i + 1])))
			return (ft_error());
		i++;
	}
	return (1);
}
