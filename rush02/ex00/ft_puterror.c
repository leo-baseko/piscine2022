/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:45:23 by guroubau          #+#    #+#             */
/*   Updated: 2022/09/25 20:16:42 by ldrieske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*
 * ft_puterror
 *
 * *str : correct error message
 *
 * If *str is null, print "(null)"
 * Else, display the error message
 * Returns an error
 */

int	ft_puterror(char *str)
{
	if (!str)
		write(2, "(null)", 6);
	else
		write(2, str, ft_strlen(str));
	return (CHECK_ERR);
}
