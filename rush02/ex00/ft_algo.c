/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:34:12 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 22:23:06 by guroubau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_write_number_value(char ***tab, char *number, int size)
{
	int	t;

	t = 0;
	while (tab[t])
	{
		if (ft_str_is_equal(tab[t][KEY], number, size) == CHECK_OK)
		{
			ft_putstr(tab[t][VALUE]);
			return (CHECK_OK);
		}
		t++;
	}
	return (CHECK_ERR);
}

int	ft_write_dozen_value(char ***tab, char *number)
{
	int		err;
	char	*dozen;

	dozen = (char *)malloc(sizeof(char) * 3);
	dozen[0] = number[0];
	if (number[0] == '1')
		dozen[1] = number[1];
	else
		dozen[1] = '0';
	dozen[2] = '\0';
	err = ft_write_number_value(tab, dozen, 2);
	free(dozen);
	return (err);
}

int	ft_algo(char ***tab, char *number)
{
	int	previous;
	int	nbrlen;
	int	i;

	previous = 0;
	nbrlen = ft_strlen(number);
	i = 0;
	if (number[0] == '0' && nbrlen == 1)
		return (ft_write_number_value(tab, number, 1));
	if (ft_strlen(number) == 10)
	{
		ft_write_number_value(tab, number, 1);
		write(1, " ", 1);
		ft_write_number_value(tab, "1000000000", 10);
		number++;
		previous = 1;
	}
	if (ft_strlen(number) == 9)
	{
		if (number[0] != '0')
		{
			if (previous == 1)
				write(1, " ", 1);
			ft_write_number_value(tab, number, 1);
			write(1, " ", 1);
			ft_write_number_value(tab, "100", 3);
		}
		previous = 1;
		number++;
	}
	if (ft_strlen(number) == 8)
	{
		if (number[0] != '0')
		{
			if (previous == 1)
				write(1, " ", 1);
			ft_write_dozen_value(tab, number);
		}
		previous = 1;
		if (number[0] == '1')
			number++;
		number++;
	}
	if (ft_strlen(number) == 7)
	{
		if (number[0] != '0')
		{
			if (previous == 1)
				write(1, " ", 1);
			ft_write_number_value(tab, number, 1);
			write(1, " ", 1);
			ft_write_number_value(tab, "1000000", 7);
		}
		previous = 1;
		number++;
	}
	if (ft_strlen(number) == 6)
	{
		if (number[0] != '0')
		{
			if (previous == 1)
				write(1, " ", 1);
			ft_write_number_value(tab, number, 1);
			write(1, " ", 1);
			ft_write_number_value(tab, "100", 3);
		}
		previous = 1;
		number++;
	}
	if (ft_strlen(number) == 5)
	{
		if (number[0] != '0')
		{
			if (previous == 1)
				write(1, " ", 1);
			ft_write_dozen_value(tab, number);
		}
		previous = 1;
		if (number[0] == '1')
			number++;
		number++;
	}
	if (ft_strlen(number) == 4)
	{
		if (number[0] != '0')
		{
			if (previous == 1)
				write(1, " ", 1);
			ft_write_number_value(tab, number, 1);
			write(1, " ", 1);
			ft_write_number_value(tab, "1000", 4);
		}
		previous = 1;
		number++;
	}
	if (ft_strlen(number) == 3)
	{
		if (number[0] != '0')
		{
			if (previous == 1)
				write(1, " ", 1);
			ft_write_number_value(tab, number, 1);
			write(1, " ", 1);
			ft_write_number_value(tab, "100", 3);
		}
		previous = 1;
		number++;
	}
	if (ft_strlen(number) == 2)
	{
		if (number[0] != '0')
		{
			if (previous == 1)
				write(1, " ", 1);
			ft_write_dozen_value(tab, number);
		}
		previous = 1;
		if (number[0] == '1')
			number++;
		number++;
	}
	if (ft_strlen(number) == 1)
	{
		if (number[0] != '0')
		{
			if (previous == 1)
				write(1, " ", 1);
			ft_write_number_value(tab, number, 1);
		}
		previous = 1;
		number++;
	}
	return (CHECK_OK);
}