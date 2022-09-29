/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:50:10 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/29 14:58:37 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*a;
	int		j;
	int		len;

	j = 0;
	len = ft_strlen(src);
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (0);
	while (src[j])
	{
		a[j] = src[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}

void	free_pouic(t_stock_str *stru, int i)
{
	int	a;

	a = 0;
	while (a <= i)
	{
		free(stru[a].copy);
		a++;
	}
	free(stru);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stru;

	i = 0;
	stru = malloc(sizeof(t_stock_str) * (ft_strlen(*av) + 1));
	if (!stru)
		return (NULL);
	while (i < ac)
	{
		stru[i].size = ft_strlen(av[i]);
		stru[i].str = av[i];
		stru[i].copy = ft_strdup(av[i]);
		if (stru[i].copy == 0)
			free_pouic(stru, i);
		i++;
	}
	return (stru);
}
