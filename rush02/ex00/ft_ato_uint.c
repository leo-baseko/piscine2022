/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ato_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:02:07 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 20:31:02 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * ft_ato_uint
 *
 * *str : String that contains the value of the dictionary
 *
 * Tranforms the value of *str into a unsigned int
 * Returns the number
 */
unsigned int	ft_ato_uint(char *str)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = 0;
	while (str[i] && ft_isdigit(str[i]) == CHECK_OK)
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}
