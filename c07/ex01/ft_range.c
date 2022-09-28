/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:11:28 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/22 19:49:28 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int *tab;

	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

#include <stdio.h>
int	main(void)
{
	int *tableau = ft_range(2, 8);
	int i = 0;
	while (tableau[i])
	{
		printf("%d\n", tableau[i]);
		i++;
	}
}
