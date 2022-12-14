/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprintable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:35:23 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 14:38:33 by guroubau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_isprintable(int c)
{
	if (c >= 32 && c <= 126)
		return (CHECK_OK);
	return (CHECK_ERR);
}
