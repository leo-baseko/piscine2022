/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:31:27 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 22:21:50 by guroubau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * ft_check_overflow
 *
 * *nbr : String
 *
 * Returns an error if the number is superior
 * 		as the unsigned integer maximal value
 * Returns a ok if not
 */

int	ft_check_overflow(char *nbr)
{
	t_uint	nb;
	char	*cpy;
	int		i;
	t_uint	max_uint;

	i = 0;
	max_uint = 4294967295;
	while (nbr[i])
		i++;
	cpy = ft_strndup(nbr, i - 1);
	nb = ft_ato_uint(cpy);
	if (nb > max_uint / 10
		|| (nb == max_uint / 10 && (nbr[i - 1] - '0') > 5))
		return (CHECK_ERR);
	return (CHECK_OK);
}

/*
 * ft_check _number
 *
 * *nbr : String
 *
 * Checks if the *nbr is indeed composed of digits and not too long (stack overflow)
 * Returns ok if everything's fine
 */

int	ft_check_number(char *nbr)
{
	int	i;

	if (!nbr)
		return (CHECK_ERR);
	i = 0;
	while (nbr[i])
	{
		if (ft_isdigit(nbr[i]) == CHECK_ERR || i > 10)
			return (CHECK_ERR);
		i++;
	}
	if (i > 10 || (i == 10 && ft_check_overflow(nbr) == CHECK_ERR))
		return (CHECK_ERR);
	return (CHECK_OK);
}
