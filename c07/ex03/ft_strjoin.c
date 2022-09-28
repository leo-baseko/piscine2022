/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:41:45 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/26 22:26:59 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char ***strs, char *sep)
{
	char	*s1;
	int	i;
	int	j;
	int	k;

	s1 = malloc(sizeof(strs));
	if	(!s1)
		return (0);
	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
		{
			s1[j] = *strs[i][k];
			j++;
			k++;
		}
		k = 0;
		while (sep[k] != '\0' && i != size - 1)
		{
			s1[j] = sep[k];
			j++;
			k++;
		}
	}
	s1[k] = '\0';
	return (s1);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	char *test = &argv;
	printf("%s", ft_strjoin(argc, argv, " lol "));
	return (0);
}
