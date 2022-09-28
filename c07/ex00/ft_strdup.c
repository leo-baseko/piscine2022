/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:05:55 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/26 15:45:41 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	char *a;
	int j;
	int len;

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

int	main(void)
{
	char slt[] = "batard";
	ft_strdup(slt);
	printf("char initial : %s\n\n", slt);
	printf("retour fonction ft_strdup : %s\n", ft_strdup(slt));
	printf("case memoire ft_strdup : %p\n", ft_strdup(slt));
	printf("retour fonction strdup : %s\n", strdup(slt));
	printf("case memoire strdup : %p\n", strdup(slt));
	printf("case memoire du char initial : %p\n", slt);
	return (0);
}
