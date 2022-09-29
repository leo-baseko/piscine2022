/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrieske <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:55:35 by ldrieske          #+#    #+#             */
/*   Updated: 2022/09/29 12:45:20 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_res_is_negative(char *f, int *a)
{
	int	j;
	int	k;
	int	l;

	j = 0;
	k = 0;
	l = *a;
	while (f[j] < '0' || f[j] > '9')
	{
		if (f[j] == '-')
			k++;
		j++;
	}
	if (k % 2 != 0)
		*a = l * (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				res = res * 10 + str[i] - '0';
				i++;
			}
			ft_res_is_negative(str, &res);
			return (res);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char *test = "\v \f \r  \n  \t ---++++1aa548--510";
	printf("%d", ft_atoi(test));
}*/
