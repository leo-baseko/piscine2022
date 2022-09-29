/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:05:59 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 17:18:29 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * ft_isdigit
 *
 * c : an integer
 *
 * Returns ok if c is a digit
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (CHECK_OK);
	return (CHECK_ERR);
}
