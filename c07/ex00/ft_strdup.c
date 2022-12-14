/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:05:55 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/28 12:17:26 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *slt = "salut";
	char *test = ft_strdup(slt);
	printf("char initial : %s\n\n", test);
	printf("retour fonction ft_strdup : %s\n", ft_strdup(slt));
	printf("case memoire ft_strdup : %p\n", ft_strdup(slt));
	printf("retour fonction strdup : %s\n", strdup(slt));
	printf("case memoire strdup : %p\n", strdup(slt));
	return (0);
}*/
