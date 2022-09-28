/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:19:34 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/26 17:05:10 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
    int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		 return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	int *tab;
	int	i;
	int	size;

	size = ft_ultimate_range(&tab, 2, 5);
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
