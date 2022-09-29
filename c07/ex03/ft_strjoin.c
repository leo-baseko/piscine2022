/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:41:45 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/28 12:07:22 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_tabsize(int size, char **strs, char *sep)
{
	int	x;
	int	y;
	int	len;

	x = 0;
	len = 0;
	while (sep[len])
		len++;
	len *= size;
	while (x < size)
	{
		y = 0;
		while (strs[x][y])
		{
			len++;
			y++;
		}
		x++;
	}
	if (len <= 0)
		return (0);
	return (len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	str = malloc(sizeof(char) * ft_tabsize(size, strs, sep));
	if (!str)
		return (0);
	if (!size)
		return (str);
	while (x < size)
	{
		y = 0;
		while (strs[x][y])
			str[i++] = strs[x][y++];
		y = 0;
		while (sep && sep[y] && x < size - 1)
			str[i++] = sep[y++];
	x++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char *test;
	test = ft_strjoin(argc, argv, "---");
	if (!test)
		return 0;
	printf("%s", test);
}*/
